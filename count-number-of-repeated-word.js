let str = `It is true for all that that that that that that that refers to is not the same that that that that refers to`;

function countRepeat(str) {
  let wordCount = {};
  let words = str.toLowerCase().split(" ");
  for (const word of words) {
    if (!wordCount.hasOwnProperty(word)) {
      wordCount[`${word}`] = 1;
    } else {
      wordCount[word] = wordCount[word] + 1;
    }
  }
  return wordCount;
}

const result = countRepeat(str);

console.log(result);
