let bubbleLoop = (first) => {
  if (typeof first !== "object") {
    return ["invalid list"];
  }
  var i = 0;

  for (i; i < first.length - 1; i++) {
    var j = i + 1;
    for (j; j < first.length; j++) {
      var compareFirst = first[i];
      var compareSecond = first[j];

      if (compareSecond < compareFirst) {
        first[i] = compareSecond;
        first[j] = compareFirst;
      }
    }
  }
  return first;
};

let list = [8, 2, 1, 4, 5];

console.log("original list", list);

let sorted = bubbleLoop(list);

console.log("list sorted", sorted);
