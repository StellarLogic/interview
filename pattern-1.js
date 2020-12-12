function pattern(n) {
  for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= i; j++) {
      if (i == j) {
        process.stdout.write(`${i}`);
      } else if (i > 1) {
        process.stdout.write(`${i} * `);
      } else {
        process.stdout.write(`${i}`);
      }
    }
    console.log("");
  }

  for (let i = n; i >= 1; i--) {
    for (let j = i; j >= 1; j--) {
      if (j === 1) {
        process.stdout.write(`${i}`);
      } else if (i > 1) {
        process.stdout.write(`${i} * `);
      } else {
        process.stdout.write(`${i}`);
      }
    }
    console.log("");
  }
}

pattern(5);

// output

// 1
// 2 * 2
// 3 * 3 * 3
// 4 * 4 * 4 * 4
// 5 * 5 * 5 * 5 * 5
// 5 * 5 * 5 * 5 * 5
// 4 * 4 * 4 * 4
// 3 * 3 * 3
// 2 * 2
// 1
