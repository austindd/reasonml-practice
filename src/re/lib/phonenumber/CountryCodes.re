module CountryCodes = {

  type countryCode = {
    name: string,
    a2: string, 
    a3: string, 
    num: string, 
    dial: string
  }

  let afghanistan: countryCode = { name: "Afghanistan",  a2: "AF", a3: "AFG", num: "4", dial: "93" };
  let albania: countryCode = { name: "Albania",  a2: "AL", a3: "ALB", num: "8", dial: "355" };
  let algeria: countryCode = { name: "Algeria",  a2: "DZ", a3: "DZA", num: "12", dial: "213" };
  let americanSamoa: countryCode = { name: "American Samoa",  a2: "AS", a3: "ASM", num: "16", dial: "1-684" };
  let andorra: countryCode = { name: "Andorra",  a2: "AD", a3: "AND", num: "20", dial: "376" };
  let angola: countryCode = { name: "Angola",  a2: "AO", a3: "AGO", num: "24", dial: "244" };
  let anguilla: countryCode = { name: "Anguilla",  a2: "AI", a3: "AIA", num: "660", dial: "1-264" };
  let antarctica: countryCode = { name: "Antarctica",  a2: "AQ", a3: "ATA", num: "10", dial: "672" };
  let antiguaAndBarbuda: countryCode = { name: "Antigua and Barbuda",  a2: "AG", a3: "ATG", num: "28", dial: "1-268" };
  let argentina: countryCode = { name: "Argentina",  a2: "AR", a3: "ARG", num: "32", dial: "54" };
  let armenia: countryCode = { name: "Armenia",  a2: "AM", a3: "ARM", num: "51", dial: "374" };
  let aruba: countryCode = { name: "Aruba",  a2: "AW", a3: "ABW", num: "533", dial: "297" };
  let australia: countryCode = { name: "Australia",  a2: "AU", a3: "AUS", num: "36", dial: "61" };
  let austria: countryCode = { name: "Austria",  a2: "AT", a3: "AUT", num: "40", dial: "43" };
  let azerbaijan: countryCode = { name: "Azerbaijan",  a2: "AZ", a3: "AZE", num: "31", dial: "994" };
  let bahamas: countryCode = { name: "Bahamas",  a2: "BS", a3: "BHS", num: "44", dial: "1-242" };
  let bahrain: countryCode = { name: "Bahrain",  a2: "BH", a3: "BHR", num: "48", dial: "973" };
  let bangladesh: countryCode = { name: "Bangladesh",  a2: "BD", a3: "BGD", num: "50", dial: "880" };
  let barbados: countryCode = { name: "Barbados",  a2: "BB", a3: "BRB", num: "52", dial: "1-246" };
  let belarus: countryCode = { name: "Belarus",  a2: "BY", a3: "BLR", num: "112", dial: "375" };
  let belgium: countryCode = { name: "Belgium",  a2: "BE", a3: "BEL", num: "56", dial: "32" };
  let belize: countryCode = { name: "Belize",  a2: "BZ", a3: "BLZ", num: "84", dial: "501" };
  let benin: countryCode = { name: "Benin",  a2: "BJ", a3: "BEN", num: "204", dial: "229" };
  let bermuda: countryCode = { name: "Bermuda",  a2: "BM", a3: "BMU", num: "60", dial: "1-441" };
  let bhutan: countryCode = { name: "Bhutan",  a2: "BT", a3: "BTN", num: "64", dial: "975" };
  let bolivia: countryCode = { name: "Bolivia",  a2: "BO", a3: "BOL", num: "68", dial: "591" };
  let bonaire: countryCode = { name: "Bonaire",  a2: "BQ", a3: "BES", num: "535", dial: "599" };
  let bosniaAndHerzegovina: countryCode = { name: "Bosnia and Herzegovina",  a2: "BA", a3: "BIH", num: "70", dial: "387" };
  let botswana: countryCode = { name: "Botswana",  a2: "BW", a3: "BWA", num: "72", dial: "267" };
  let bouvetIsland: countryCode = { name: "Bouvet Island",  a2: "BV", a3: "BVT", num: "74", dial: "47" };
  let brazil: countryCode = { name: "Brazil",  a2: "BR", a3: "BRA", num: "76", dial: "55" };
  let britishIndianOceanTerritory: countryCode = { name: "British Indian Ocean Territory",  a2: "IO", a3: "IOT", num: "86", dial: "246" };
  let bruneiDarussalam: countryCode = { name: "Brunei Darussalam",  a2: "BN", a3: "BRN", num: "96", dial: "673" };
  let bulgaria: countryCode = { name: "Bulgaria",  a2: "BG", a3: "BGR", num: "100", dial: "359" };
  let burkinaFaso: countryCode = { name: "Burkina Faso",  a2: "BF", a3: "BFA", num: "854", dial: "226" };
  let burundi: countryCode = { name: "Burundi",  a2: "BI", a3: "BDI", num: "108", dial: "257" };
  let cambodia: countryCode = { name: "Cambodia",  a2: "KH", a3: "KHM", num: "116", dial: "855" };
  let cameroon: countryCode = { name: "Cameroon",  a2: "CM", a3: "CMR", num: "120", dial: "237" };
  let canada: countryCode = { name: "Canada",  a2: "CA", a3: "CAN", num: "124", dial: "1" };
  let capeVerde: countryCode = { name: "Cape Verde",  a2: "CV", a3: "CPV", num: "132", dial: "238" };
  let caymanIslands: countryCode = { name: "Cayman Islands",  a2: "KY", a3: "CYM", num: "136", dial: "1-345" };
  let centralAfricanRepublic: countryCode = { name: "Central African Republic",  a2: "CF", a3: "CAF", num: "140", dial: "236" };
  let chad: countryCode = { name: "Chad",  a2: "TD", a3: "TCD", num: "148", dial: "235" };
  let chile: countryCode = { name: "Chile",  a2: "CL", a3: "CHL", num: "152", dial: "56" };
  let china: countryCode = { name: "China",  a2: "CN", a3: "CHN", num: "156", dial: "86" };
  let christmasIsland: countryCode = { name: "Christmas Island",  a2: "CX", a3: "CXR", num: "162", dial: "61" };
  let cocosKeelingIslands: countryCode = { name: "Cocos (Keeling) Islands",  a2: "CC", a3: "CCK", num: "166", dial: "61" };
  let colombia: countryCode = { name: "Colombia",  a2: "CO", a3: "COL", num: "170", dial: "57" };
  let comoros: countryCode = { name: "Comoros",  a2: "KM", a3: "COM", num: "174", dial: "269" };
  let congo: countryCode = { name: "Congo",  a2: "CG", a3: "COG", num: "178", dial: "242" };
  let democraticRepublicOfTheCongo: countryCode = { name: "Democratic Republic of the Congo",  a2: "CD", a3: "COD", num: "180", dial: "243" };
  let cookIslands: countryCode = { name: "Cook Islands",  a2: "CK", a3: "COK", num: "184", dial: "682" };
  let costaRica: countryCode = { name: "Costa Rica",  a2: "CR", a3: "CRI", num: "188", dial: "506" };
  let croatia: countryCode = { name: "Croatia",  a2: "HR", a3: "HRV", num: "191", dial: "385" };
  let cuba: countryCode = { name: "Cuba",  a2: "CU", a3: "CUB", num: "192", dial: "53" };
  let curacao: countryCode = { name: "Curacao",  a2: "CW", a3: "CUW", num: "531", dial: "599" };
  let cyprus: countryCode = { name: "Cyprus",  a2: "CY", a3: "CYP", num: "196", dial: "357" };
  let czechRepublic: countryCode = { name: "Czech Republic",  a2: "CZ", a3: "CZE", num: "203", dial: "420" };
  let coteDIvoire: countryCode = { name: "Cote d'Ivoire",  a2: "CI", a3: "CIV", num: "384", dial: "225" };
  let denmark: countryCode = { name: "Denmark",  a2: "DK", a3: "DNK", num: "208", dial: "45" };
  let djibouti: countryCode = { name: "Djibouti",  a2: "DJ", a3: "DJI", num: "262", dial: "253" };
  let dominica: countryCode = { name: "Dominica",  a2: "DM", a3: "DMA", num: "212", dial: "1-767" };
  let dominicanRepublic: countryCode = { name: "Dominican Republic",  a2: "DO", a3: "DOM", num: "214", dial: "1-809,1-829,1-849" };
  let ecuador: countryCode = { name: "Ecuador",  a2: "EC", a3: "ECU", num: "218", dial: "593" };
  let egypt: countryCode = { name: "Egypt",  a2: "EG", a3: "EGY", num: "818", dial: "20" };
  let elSalvador: countryCode = { name: "El Salvador",  a2: "SV", a3: "SLV", num: "222", dial: "503" };
  let equatorialGuinea: countryCode = { name: "Equatorial Guinea",  a2: "GQ", a3: "GNQ", num: "226", dial: "240" };
  let eritrea: countryCode = { name: "Eritrea",  a2: "ER", a3: "ERI", num: "232", dial: "291" };
  let estonia: countryCode = { name: "Estonia",  a2: "EE", a3: "EST", num: "233", dial: "372" };
  let ethiopia: countryCode = { name: "Ethiopia",  a2: "ET", a3: "ETH", num: "231", dial: "251" };
  let falklandIslandsMalvinas: countryCode = { name: "Falkland Islands (Malvinas)",  a2: "FK", a3: "FLK", num: "238", dial: "500" };
  let faroeIslands: countryCode = { name: "Faroe Islands",  a2: "FO", a3: "FRO", num: "234", dial: "298" };
  let fiji: countryCode = { name: "Fiji",  a2: "FJ", a3: "FJI", num: "242", dial: "679" };
  let finland: countryCode = { name: "Finland",  a2: "FI", a3: "FIN", num: "246", dial: "358" };
  let france: countryCode = { name: "France",  a2: "FR", a3: "FRA", num: "250", dial: "33" };
  let frenchGuiana: countryCode = { name: "French Guiana",  a2: "GF", a3: "GUF", num: "254", dial: "594" };
  let frenchPolynesia: countryCode = { name: "French Polynesia",  a2: "PF", a3: "PYF", num: "258", dial: "689" };
  let frenchSouthernTerritories: countryCode = { name: "French Southern Territories",  a2: "TF", a3: "ATF", num: "260", dial: "262" };
  let gabon: countryCode = { name: "Gabon",  a2: "GA", a3: "GAB", num: "266", dial: "241" };
  let gambia: countryCode = { name: "Gambia",  a2: "GM", a3: "GMB", num: "270", dial: "220" };
  let georgia: countryCode = { name: "Georgia",  a2: "GE", a3: "GEO", num: "268", dial: "995" };
  let germany: countryCode = { name: "Germany",  a2: "DE", a3: "DEU", num: "276", dial: "49" };
  let ghana: countryCode = { name: "Ghana",  a2: "GH", a3: "GHA", num: "288", dial: "233" };
  let gibraltar: countryCode = { name: "Gibraltar",  a2: "GI", a3: "GIB", num: "292", dial: "350" };
  let greece: countryCode = { name: "Greece",  a2: "GR", a3: "GRC", num: "300", dial: "30" };
  let greenland: countryCode = { name: "Greenland",  a2: "GL", a3: "GRL", num: "304", dial: "299" };
  let grenada: countryCode = { name: "Grenada",  a2: "GD", a3: "GRD", num: "308", dial: "1-473" };
  let guadeloupe: countryCode = { name: "Guadeloupe",  a2: "GP", a3: "GLP", num: "312", dial: "590" };
  let guam: countryCode = { name: "Guam",  a2: "GU", a3: "GUM", num: "316", dial: "1-671" };
  let guatemala: countryCode = { name: "Guatemala",  a2: "GT", a3: "GTM", num: "320", dial: "502" };
  let guernsey: countryCode = { name: "Guernsey",  a2: "GG", a3: "GGY", num: "831", dial: "44" };
  let guinea: countryCode = { name: "Guinea",  a2: "GN", a3: "GIN", num: "324", dial: "224" };
  let guineaBissau: countryCode = { name: "Guinea-Bissau",  a2: "GW", a3: "GNB", num: "624", dial: "245" };
  let guyana: countryCode = { name: "Guyana",  a2: "GY", a3: "GUY", num: "328", dial: "592" };
  let haiti: countryCode = { name: "Haiti",  a2: "HT", a3: "HTI", num: "332", dial: "509" };
  let heardIslandAndMcDonaldIslands: countryCode = { name: "Heard Island and McDonald Islands",  a2: "HM", a3: "HMD", num: "334", dial: "672" };
  let honduras: countryCode = { name: "Honduras",  a2: "HN", a3: "HND", num: "340", dial: "504" };
  let hongKong: countryCode = { name: "Hong Kong",  a2: "HK", a3: "HKG", num: "344", dial: "852" };
  let hungary: countryCode = { name: "Hungary",  a2: "HU", a3: "HUN", num: "348", dial: "36" };
  let iceland: countryCode = { name: "Iceland",  a2: "IS", a3: "ISL", num: "352", dial: "354" };
  let india: countryCode = { name: "India",  a2: "IN", a3: "IND", num: "356", dial: "91" };
  let indonesia: countryCode = { name: "Indonesia",  a2: "ID", a3: "IDN", num: "360", dial: "62" };
  let iran: countryCode = { name: "Iran, Islamic Republic of",  a2: "IR", a3: "IRN", num: "364", dial: "98" };
  let iraq: countryCode = { name: "Iraq",  a2: "IQ", a3: "IRQ", num: "368", dial: "964" };
  let ireland: countryCode = { name: "Ireland",  a2: "IE", a3: "IRL", num: "372", dial: "353" };
  let isleofMan: countryCode = { name: "Isle of Man",  a2: "IM", a3: "IMN", num: "833", dial: "44" };
  let israel: countryCode = { name: "Israel",  a2: "IL", a3: "ISR", num: "376", dial: "972" };
  let italy: countryCode = { name: "Italy",  a2: "IT", a3: "ITA", num: "380", dial: "39" };
  let jamaica: countryCode = { name: "Jamaica",  a2: "JM", a3: "JAM", num: "388", dial: "1-876" };
  let japan: countryCode = { name: "Japan",  a2: "JP", a3: "JPN", num: "392", dial: "81" };
  let jersey: countryCode = { name: "Jersey",  a2: "JE", a3: "JEY", num: "832", dial: "44" };
  let jordan: countryCode = { name: "Jordan",  a2: "JO", a3: "JOR", num: "400", dial: "962" };
  let kazakhstan: countryCode = { name: "Kazakhstan",  a2: "KZ", a3: "KAZ", num: "398", dial: "7" };
  let kenya: countryCode = { name: "Kenya",  a2: "KE", a3: "KEN", num: "404", dial: "254" };
  let kiribati: countryCode = { name: "Kiribati",  a2: "KI", a3: "KIR", num: "296", dial: "686" };
  let northKorea: countryCode = { name: "Korea, Democratic People's Republic of",  a2: "KP", a3: "PRK", num: "408", dial: "850" };
  let southKorea: countryCode = { name: "Korea, Republic of",  a2: "KR", a3: "KOR", num: "410", dial: "82" };
  let kuwait: countryCode = { name: "Kuwait",  a2: "KW", a3: "KWT", num: "414", dial: "965" };
  let kyrgyzstan: countryCode = { name: "Kyrgyzstan",  a2: "KG", a3: "KGZ", num: "417", dial: "996" };
  let lao: countryCode = { name: "Lao People's Democratic Republic",  a2: "LA", a3: "LAO", num: "418", dial: "856" };
  let latvia: countryCode = { name: "Latvia",  a2: "LV", a3: "LVA", num: "428", dial: "371" };
  let lebanon: countryCode = { name: "Lebanon",  a2: "LB", a3: "LBN", num: "422", dial: "961" };
  let lesotho: countryCode = { name: "Lesotho",  a2: "LS", a3: "LSO", num: "426", dial: "266" };
  let liberia: countryCode = { name: "Liberia",  a2: "LR", a3: "LBR", num: "430", dial: "231" };
  let libya: countryCode = { name: "Libya",  a2: "LY", a3: "LBY", num: "434", dial: "218" };
  let liechtenstein: countryCode = { name: "Liechtenstein",  a2: "LI", a3: "LIE", num: "438", dial: "423" };
  let lithuania: countryCode = { name: "Lithuania",  a2: "LT", a3: "LTU", num: "440", dial: "370" };
  let luxembourg: countryCode = { name: "Luxembourg",  a2: "LU", a3: "LUX", num: "442", dial: "352" };
  let macao: countryCode = { name: "Macao",  a2: "MO", a3: "MAC", num: "446", dial: "853" };
  let macedonia: countryCode = { name: "Macedonia, the Former Yugoslav Republic of",  a2: "MK", a3: "MKD", num: "807", dial: "389" };
  let madagascar: countryCode = { name: "Madagascar",  a2: "MG", a3: "MDG", num: "450", dial: "261" };
  let malawi: countryCode = { name: "Malawi",  a2: "MW", a3: "MWI", num: "454", dial: "265" };
  let malaysia: countryCode = { name: "Malaysia",  a2: "MY", a3: "MYS", num: "458", dial: "60" };
  let maldives: countryCode = { name: "Maldives",  a2: "MV", a3: "MDV", num: "462", dial: "960" };
  let mali: countryCode = { name: "Mali",  a2: "ML", a3: "MLI", num: "466", dial: "223" };
  let malta: countryCode = { name: "Malta",  a2: "MT", a3: "MLT", num: "470", dial: "356" };
  let marshallIslands: countryCode = { name: "Marshall Islands",  a2: "MH", a3: "MHL", num: "584", dial: "692" };
  let martinique: countryCode = { name: "Martinique",  a2: "MQ", a3: "MTQ", num: "474", dial: "596" };
  let mauritania: countryCode = { name: "Mauritania",  a2: "MR", a3: "MRT", num: "478", dial: "222" };
  let mauritius: countryCode = { name: "Mauritius",  a2: "MU", a3: "MUS", num: "480", dial: "230" };
  let mayotte: countryCode = { name: "Mayotte",  a2: "YT", a3: "MYT", num: "175", dial: "262" };
  let mexico: countryCode = { name: "Mexico",  a2: "MX", a3: "MEX", num: "484", dial: "52" };
  let micronesia: countryCode = { name: "Micronesia, Federated States of",  a2: "FM", a3: "FSM", num: "583", dial: "691" };
  let moldova: countryCode = { name: "Moldova, Republic of",  a2: "MD", a3: "MDA", num: "498", dial: "373" };
  let monaco: countryCode = { name: "Monaco",  a2: "MC", a3: "MCO", num: "492", dial: "377" };
  let mongolia: countryCode = { name: "Mongolia",  a2: "MN", a3: "MNG", num: "496", dial: "976" };
  let montenegro: countryCode = { name: "Montenegro",  a2: "ME", a3: "MNE", num: "499", dial: "382" };
  let montserrat: countryCode = { name: "Montserrat",  a2: "MS", a3: "MSR", num: "500", dial: "1-664" };
  let morocco: countryCode = { name: "Morocco",  a2: "MA", a3: "MAR", num: "504", dial: "212" };
  let mozambique: countryCode = { name: "Mozambique",  a2: "MZ", a3: "MOZ", num: "508", dial: "258" };
  let myanmar: countryCode = { name: "Myanmar",  a2: "MM", a3: "MMR", num: "104", dial: "95" };
  let namibia: countryCode = { name: "Namibia",  a2: "NA", a3: "NAM", num: "516", dial: "264" };
  let nauru: countryCode = { name: "Nauru",  a2: "NR", a3: "NRU", num: "520", dial: "674" };
  let nepal: countryCode = { name: "Nepal",  a2: "NP", a3: "NPL", num: "524", dial: "977" };
  let netherlands: countryCode = { name: "Netherlands",  a2: "NL", a3: "NLD", num: "528", dial: "31" };
  let newCaledonia: countryCode = { name: "New Caledonia",  a2: "NC", a3: "NCL", num: "540", dial: "687" };
  let newZealand: countryCode = { name: "New Zealand",  a2: "NZ", a3: "NZL", num: "554", dial: "64" };
  let nicaragua: countryCode = { name: "Nicaragua",  a2: "NI", a3: "NIC", num: "558", dial: "505" };
  let niger: countryCode = { name: "Niger",  a2: "NE", a3: "NER", num: "562", dial: "227" };
  let nigeria: countryCode = { name: "Nigeria",  a2: "NG", a3: "NGA", num: "566", dial: "234" };
  let niue: countryCode = { name: "Niue",  a2: "NU", a3: "NIU", num: "570", dial: "683" };
  let norfolkIsland: countryCode = { name: "Norfolk Island",  a2: "NF", a3: "NFK", num: "574", dial: "672" };
  let northernMarianaIslands: countryCode = { name: "Northern Mariana Islands",  a2: "MP", a3: "MNP", num: "580", dial: "1-670" };
  let norway: countryCode = { name: "Norway",  a2: "NO", a3: "NOR", num: "578", dial: "47" };
  let oman: countryCode = { name: "Oman",  a2: "OM", a3: "OMN", num: "512", dial: "968" };
  let pakistan: countryCode = { name: "Pakistan",  a2: "PK", a3: "PAK", num: "586", dial: "92" };
  let palau: countryCode = { name: "Palau",  a2: "PW", a3: "PLW", num: "585", dial: "680" };
  let palestine: countryCode = { name: "Palestine, State of",  a2: "PS", a3: "PSE", num: "275", dial: "970" };
  let panama: countryCode = { name: "Panama",  a2: "PA", a3: "PAN", num: "591", dial: "507" };
  let papuaNewGuinea: countryCode = { name: "Papua New Guinea",  a2: "PG", a3: "PNG", num: "598", dial: "675" };
  let paraguay: countryCode = { name: "Paraguay",  a2: "PY", a3: "PRY", num: "600", dial: "595" };
  let peru: countryCode = { name: "Peru",  a2: "PE", a3: "PER", num: "604", dial: "51" };
  let philippines: countryCode = { name: "Philippines",  a2: "PH", a3: "PHL", num: "608", dial: "63" };
  let pitcairn: countryCode = { name: "Pitcairn",  a2: "PN", a3: "PCN", num: "612", dial: "870" };
  let poland: countryCode = { name: "Poland",  a2: "PL", a3: "POL", num: "616", dial: "48" };
  let portugal: countryCode = { name: "Portugal",  a2: "PT", a3: "PRT", num: "620", dial: "351" };
  let puertoRico: countryCode = { name: "Puerto Rico",  a2: "PR", a3: "PRI", num: "630", dial: "1" };
  let qatar: countryCode = { name: "Qatar",  a2: "QA", a3: "QAT", num: "634", dial: "974" };
  let romania: countryCode = { name: "Romania",  a2: "RO", a3: "ROU", num: "642", dial: "40" };
  let russianFederation: countryCode = { name: "Russian Federation",  a2: "RU", a3: "RUS", num: "643", dial: "7" };
  let rwanda: countryCode = { name: "Rwanda",  a2: "RW", a3: "RWA", num: "646", dial: "250" };
  let reunion: countryCode = { name: "Reunion",  a2: "RE", a3: "REU", num: "638", dial: "262" };
  let saintBarthelemy: countryCode = { name: "Saint Barthelemy",  a2: "BL", a3: "BLM", num: "652", dial: "590" };
  let saintHelena: countryCode = { name: "Saint Helena",  a2: "SH", a3: "SHN", num: "654", dial: "290" };
  let saintKittsAndNevis: countryCode = { name: "Saint Kitts and Nevis",  a2: "KN", a3: "KNA", num: "659", dial: "1-869" };
  let saintLucia: countryCode = { name: "Saint Lucia",  a2: "LC", a3: "LCA", num: "662", dial: "1-758" };
  let saintMartinFrenchPart: countryCode = { name: "Saint Martin (French part)",  a2: "MF", a3: "MAF", num: "663", dial: "590" };
  let saintPierreAndMiquelon: countryCode = { name: "Saint Pierre and Miquelon",  a2: "PM", a3: "SPM", num: "666", dial: "508" };
  let saintVincentAndtheGrenadines: countryCode = { name: "Saint Vincent and the Grenadines",  a2: "VC", a3: "VCT", num: "670", dial: "1-784" };
  let samoa: countryCode = { name: "Samoa",  a2: "WS", a3: "WSM", num: "882", dial: "685" };
  let sanMarino: countryCode = { name: "San Marino",  a2: "SM", a3: "SMR", num: "674", dial: "378" };
  let saoTomeAndPrincipe: countryCode = { name: "Sao Tome and Principe",  a2: "ST", a3: "STP", num: "678", dial: "239" };
  let saudiArabia: countryCode = { name: "Saudi Arabia",  a2: "SA", a3: "SAU", num: "682", dial: "966" };
  let senegal: countryCode = { name: "Senegal",  a2: "SN", a3: "SEN", num: "686", dial: "221" };
  let serbia: countryCode = { name: "Serbia",  a2: "RS", a3: "SRB", num: "688", dial: "381" };
  let seychelles: countryCode = { name: "Seychelles",  a2: "SC", a3: "SYC", num: "690", dial: "248" };
  let sierraLeone: countryCode = { name: "Sierra Leone",  a2: "SL", a3: "SLE", num: "694", dial: "232" };
  let singapore: countryCode = { name: "Singapore",  a2: "SG", a3: "SGP", num: "702", dial: "65" };
  let sintMaartenDutchPart: countryCode = { name: "Sint Maarten (Dutch part)",  a2: "SX", a3: "SXM", num: "534", dial: "1-721" };
  let slovakia: countryCode = { name: "Slovakia",  a2: "SK", a3: "SVK", num: "703", dial: "421" };
  let slovenia: countryCode = { name: "Slovenia",  a2: "SI", a3: "SVN", num: "705", dial: "386" };
  let solomonIslands: countryCode = { name: "Solomon Islands",  a2: "SB", a3: "SLB", num: "90", dial: "677" };
  let somalia: countryCode = { name: "Somalia",  a2: "SO", a3: "SOM", num: "706", dial: "252" };
  let southAfrica: countryCode = { name: "South Africa",  a2: "ZA", a3: "ZAF", num: "710", dial: "27" };
  let southGeorgiaAndtheSouthSandwichIslands: countryCode = { name: "South Georgia and the South Sandwich Islands",  a2: "GS", a3: "SGS", num: "239", dial: "500" };
  let southSudan: countryCode = { name: "South Sudan",  a2: "SS", a3: "SSD", num: "728", dial: "211" };
  let spain: countryCode = { name: "Spain",  a2: "ES", a3: "ESP", num: "724", dial: "34" };
  let sriLanka: countryCode = { name: "Sri Lanka",  a2: "LK", a3: "LKA", num: "144", dial: "94" };
  let sudan: countryCode = { name: "Sudan",  a2: "SD", a3: "SDN", num: "729", dial: "249" };
  let suriname: countryCode = { name: "Suriname",  a2: "SR", a3: "SUR", num: "740", dial: "597" };
  let svalbardAndJanMayen: countryCode = { name: "Svalbard and Jan Mayen",  a2: "SJ", a3: "SJM", num: "744", dial: "47" };
  let swaziland: countryCode = { name: "Swaziland",  a2: "SZ", a3: "SWZ", num: "748", dial: "268" };
  let sweden: countryCode = { name: "Sweden",  a2: "SE", a3: "SWE", num: "752", dial: "46" };
  let switzerland: countryCode = { name: "Switzerland",  a2: "CH", a3: "CHE", num: "756", dial: "41" };
  let syrianArabRepublic: countryCode = { name: "Syrian Arab Republic",  a2: "SY", a3: "SYR", num: "760", dial: "963" };
  let taiwan: countryCode = { name: "Taiwan",  a2: "TW", a3: "TWN", num: "158", dial: "886" };
  let tajikistan: countryCode = { name: "Tajikistan",  a2: "TJ", a3: "TJK", num: "762", dial: "992" };
  let unitedRepublicOfTanzania: countryCode = { name: "United Republic of Tanzania",  a2: "TZ", a3: "TZA", num: "834", dial: "255" };
  let thailand: countryCode = { name: "Thailand",  a2: "TH", a3: "THA", num: "764", dial: "66" };
  let timorLeste: countryCode = { name: "Timor-Leste",  a2: "TL", a3: "TLS", num: "626", dial: "670" };
  let togo: countryCode = { name: "Togo",  a2: "TG", a3: "TGO", num: "768", dial: "228" };
  let tokelau: countryCode = { name: "Tokelau",  a2: "TK", a3: "TKL", num: "772", dial: "690" };
  let tonga: countryCode = { name: "Tonga",  a2: "TO", a3: "TON", num: "776", dial: "676" };
  let trinidadAndTobago: countryCode = { name: "Trinidad and Tobago",  a2: "TT", a3: "TTO", num: "780", dial: "1-868" };
  let tunisia: countryCode = { name: "Tunisia",  a2: "TN", a3: "TUN", num: "788", dial: "216" };
  let turkey: countryCode = { name: "Turkey",  a2: "TR", a3: "TUR", num: "792", dial: "90" };
  let turkmenistan: countryCode = { name: "Turkmenistan",  a2: "TM", a3: "TKM", num: "795", dial: "993" };
  let turksandCaicosIslands: countryCode = { name: "Turks and Caicos Islands",  a2: "TC", a3: "TCA", num: "796", dial: "1-649" };
  let tuvalu: countryCode = { name: "Tuvalu",  a2: "TV", a3: "TUV", num: "798", dial: "688" };
  let uganda: countryCode = { name: "Uganda",  a2: "UG", a3: "UGA", num: "800", dial: "256" };
  let ukraine: countryCode = { name: "Ukraine",  a2: "UA", a3: "UKR", num: "804", dial: "380" };
  let unitedArabEmirates: countryCode = { name: "United Arab Emirates",  a2: "AE", a3: "ARE", num: "784", dial: "971" };
  let unitedKingdom: countryCode = { name: "United Kingdom",  a2: "GB", a3: "GBR", num: "826", dial: "44" };
  let unitedStates: countryCode = { name: "United States",  a2: "US", a3: "USA", num: "840", dial: "1" };
  let unitedStatesMinorOutlyingIslands: countryCode = { name: "United States Minor Outlying Islands",  a2: "UM", a3: "UMI", num: "581", dial: "1" };
  let uruguay: countryCode = { name: "Uruguay",  a2: "UY", a3: "URY", num: "858", dial: "598" };
  let uzbekistan: countryCode = { name: "Uzbekistan",  a2: "UZ", a3: "UZB", num: "860", dial: "998" };
  let vanuatu: countryCode = { name: "Vanuatu",  a2: "VU", a3: "VUT", num: "548", dial: "678" };
  let vaticanCityState: countryCode = { name: "Holy See (Vatican City State)",  a2: "VA", a3: "VAT", num: "336", dial: "379" };
  let venezuela: countryCode = { name: "Venezuela",  a2: "VE", a3: "VEN", num: "862", dial: "58" };
  let vietNam: countryCode = { name: "Viet Nam",  a2: "VN", a3: "VNM", num: "704", dial: "84" };
  let britishVirginIslands: countryCode = { name: "British Virgin Islands",  a2: "VG", a3: "VGB", num: "92", dial: "1-284" };
  let usVirginIslands: countryCode = { name: "US Virgin Islands",  a2: "VI", a3: "VIR", num: "850", dial: "1-340" };
  let wallisAndFutuna: countryCode = { name: "Wallis and Futuna",  a2: "WF", a3: "WLF", num: "876", dial: "681" };
  let westernSahara: countryCode = { name: "Western Sahara",  a2: "EH", a3: "ESH", num: "732", dial: "212" };
  let yemen: countryCode = { name: "Yemen",  a2: "YE", a3: "YEM", num: "887", dial: "967" };
  let zambia: countryCode = { name: "Zambia",  a2: "ZM", a3: "ZMB", num: "894", dial: "260" };
  let zimbabwe: countryCode = { name: "Zimbabwe",  a2: "ZW", a3: "ZWE", num: "716", dial: "263" };


}
