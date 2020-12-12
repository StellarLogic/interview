const names = [
  "Sahra Wall",
  "Alexandra Mooney",
  "Earl Duran",
  "Opal Hurley",
  "Luis Swanson",
  "Kain Wiley",
  "Fern Montes",
  "Ammara Burt",
  "Hughie Mohamed",
  "Shah Rowland",
];
const lastArr = names.map((name) => name.split(" "));

const result = lastArr.sort((a, b) => {
  return a[a.length - 1].localeCompare(b[b.length - 1]);
});

console.log(result);
