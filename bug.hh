function foo(x: int): int {
  if (x == 0) {
    return 1;
  } else {
    return x * foo(x - 1);
  }
}

function main(): void {
  echo foo(5);
}

//This code will cause a stack overflow error if a large value is passed to the function.
//The maximum recursion depth is limited in Hack, and exceeding it will cause this error.
//The solution is to use iteration instead of recursion when dealing with large numbers or to increase the maximum recursion depth setting of the Hack compiler.