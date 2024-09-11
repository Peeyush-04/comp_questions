// int fun1(int number)
// {
//   static int i = 0;

//   if (number > 0)
//   {
//     ++i;
//     fun1(number - 1);
//   }

//   return i;
// }

// int fun2(int number)
// {
//   static int i = 0;
//   if (number > 0)
//   {
//     i = i + fun1(number);
//     fun2(number - 1);
//   }

//   return i;
// }