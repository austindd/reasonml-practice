const fs = require("fs");
const path = require("path");


transform (fs, path);


function transform(fs, path) {

  const sourcePath = path.join(__dirname, "cc.txt");
  const outputPath = path.join(__dirname, "output.txt");

  fs.readFile(sourcePath, "utf8", function transformer(err, res) {
    if (err) throw err;
    else {
      // console.log(res);
      let ccArray = res.split(/\r?\n/)
        .map(str => str.split(/\t/)
        .reduce((str, item, index) => {
          return str += (function arrayToString() {
            switch(index) {
              case 0:
                let objKey = (" " + (item.trim())).split(/[\<\-\s\(\)]/);
                objKey[1] = objKey[1].toLowerCase();
                objKey = objKey.join("");
                return `${objKey}: { name: "${item}",  `;
              case 1:
                return `a2: "${item}", `;
              case 2:
                return `a3: "${item}", `;
              case 3:
                return `num: "${item}", `;
              case 4:
                return `dial: "${item}" }`;
            }
          })();
        }, ""))
        .join("\r\n");
      console.log(ccArray);

      fs.writeFile(outputPath, ccArray, (err) => { 
        if (err) throw err;
      });
    }
  });

}

