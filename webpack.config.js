const webpack = require('webpack');
const path = require('path');

/*
 * We've enabled Postcss, autoprefixer and precss for you. This allows your app
 * to lint  CSS, support variables and mixins, transpile future CSS syntax,
 * inline images, and more!
 *
 * To enable SASS or LESS, add the respective loaders to module.rules
 *
 * https://github.com/postcss/postcss
 *
 * https://github.com/postcss/autoprefixer
 *
 * https://github.com/jonathantneal/precss
 *
 */

const autoprefixer = require('autoprefixer');
const precss = require('precss');

/*
 * SplitChunksPlugin is enabled by default and replaced
 * deprecated CommonsChunkPlugin. It automatically identifies modules which
 * should be splitted of chunk by heuristics using module duplication count and
 * module category (i. e. node_modules). And splits the chunks…
 *
 * It is safe to remove "splitChunks" from the generated configuration
 * and was added as an educational example.
 *
 * https://webpack.js.org/plugins/split-chunks-plugin/
 *
 */

/*
 * We've enabled UglifyJSPlugin for you! This minifies your app
 * in order to load faster and run less javascript.
 *
 * https://github.com/webpack-contrib/uglifyjs-webpack-plugin
 *
 */

const UglifyJSPlugin = require('uglifyjs-webpack-plugin');


/* Additional Imports: */
const HtmlWebpackPlugin = require('html-webpack-plugin');
const { CleanWebpackPlugin } = require('clean-webpack-plugin');

/* Custom File Paths: */

const rootPath = __dirname;

/* Sets basis for path variables. Only this root.path property should be changed if the
 * Webpack config file is moved to a different folder */


const root = { 
  path: () => __dirname,
  src: {
    path: () => path.resolve(root.path(), 'src'),
    index_js: {
      path: () => path.resolve(root.src.path(), "index.js"),

    },
  },
  dist: {
    path: () => path.resolve(root.path(), 'dist'),
    bundle_js: {
      path: () => path.resolve(root.dist.path(), 'bundle.js'), 
    },
    index_html: {
      path: () => path.resolve(root.dist.path(), 'index.html'), 
    },
  },
};


/****************************************************************/


/* Final Config Export: */

module.exports = {

  entry: {
    app: path.resolve(rootPath, "src/index.js")
  },

	output: {
		chunkFilename: '[name].[chunkhash].js',
    filename: 'bundle.js'
	},

	mode: 'development',

  devtool: 'inline-source-map',

  devServer: {
    contentBase: path.resolve(rootPath, 'dist'),
    hot: true,
  },
  
  plugins: [
    new CleanWebpackPlugin(),
    new HtmlWebpackPlugin({
      title: 'ReasonML Practice'
    }),
    new webpack.HotModuleReplacementPlugin(),
  ],

	module: {
		rules: [
			{
				test: /\.css$/,

				use: [
					{
						loader: 'style-loader'
					},
					{
						loader: 'css-loader',

						options: {
							importLoaders: 1,
							sourceMap: true
						}
					},
					{
						loader: 'postcss-loader',

						options: {
							plugins: function() {
								return [precss, autoprefixer];
							}
						}
					}
				]
			}
    ],
	},

	optimization: {
		splitChunks: {
			cacheGroups: {
				vendors: {
					priority: -10,
					test: /[\\/]node_modules[\\/]/
				}
			},

			chunks: 'async',
			minChunks: 1,
			minSize: 30000,
			name: true
		}
	},

};
