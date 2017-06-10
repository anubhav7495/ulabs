var async = require("async");
var taskArr = [];

for(let i=1; i<=100; i++) {
  taskArr.push(
    function (callback) {
      setTimeout(function (i) {
        callback(null, i);
      }.bind(this, i), Math.random()*1000);
    }
  )
}

async.parallel(taskArr, function (err, result) {
  result.forEach(function (i) {
    console.log(i);
  })
});
