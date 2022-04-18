#include <bits/stdc++.h>
using namespace std;
// void fun(int a[]) {
//     cout << a[0] << " ";
// }

// void Q(int z)
// {
//   z += z;
//   cout<<z << " ";
// }

// void P(int *y) 
// {
//   int x = *y + 2;
//   Q(x);
//   *y = x - 1; 
//   cout<<x << " ";
// }

int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    cout<<"**ppz"<<**ppz<<endl;
    z = **ppz;
    cout<<"z"<<z<<endl;
    *py += 2;
    cout<<"*py"<<*py<<endl;
    y = *py;
     cout<<"y"<<y<<endl;
    x += 3;
    return x + y + z;
}

int main()
{
    // int x=4;
    // int *p=&x;
    // cout<<"Add of x is "<<&x<<endl;
    // cout<<"Val of p is "<<p<<endl;
    // cout<<"Original Val of *p is "<<*p<<endl;
    // (*p)++;
    // cout<<"After increment "<<x<<endl;
    // cout<<"*p + 1 "<<p + 1 <<endl;//here vlaue increase by 4 byte
    // int **pp=&p;
    // cout<<"Add p_x"<<&p<<endl;
    // cout<<"Val p_p_x"<<pp<<endl;
    // cout<<"val *p_p_x"<<*pp<<endl;
    // cout<<"val **p_p_x"<<**pp<<endl;
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // cout<<" "<<*ptr<<endl;
    // (*ptr)++;
    // cout<<"f"<<f<<endl;
    // *ptr = p;
    // cout<<"p"<<f<<endl;
    // cout << *ptr << " " << f << " " << p;
    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // a = *c;
    // *c = *c + 1;
    // cout << a << "  " << b << endl;
    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout << a << " " << b << endl;
    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;
    // int b = 10;
    // int *a = &b;
    // cout<<a;
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl;
    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout << a << "  " << *c << endl;
    // int a[5];
    // int *c;
    // cout << sizeof(a) << " " << sizeof(c);
//     int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);
// int a[] = {1, 2, 3, 4};
// cout << *(a) << " " << *(a+1);
// int a[6] = {1, 2, 3};
// cout << (a + 2);
// int a[] = {1, 2, 3, 4};
// int *p = a++;
// cout << *p << endl;
// int arr[] = {4, 5, 6, 7};
//   int *p = (arr + 1);
// //   cout<<*arr;
//   cout << *arr + 9; 
//     char b[] = "xyz";
// char *c = &b[0];
// cout << c << endl;
// char s[]= "hello";
// char *p = s;
// cout << s[0] << " " << p[0];
// char arr[20];
//   int i;
//   for(i = 0; i < 10; i++) {
//     *(arr + i) = 65 + i;
//   }
//   *(arr + i) = '\0';
//   cout << arr;
//   return 0;

// int numbers[5];
//   int * p;
//   p = numbers; 
//   *p = 10;
//   p = &numbers[2]; 
//   *p = 20;
//   p--; 
//   *p = 30;
//   p = numbers + 3;
//   *p = 40;
//   p = numbers;
//   *(p+4) = 50;
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";
//   }
//  char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] << *(st)+i << *(i+st) << i[st];
//   }
// float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//   float *ptr1 = &arr[0];
//   float *ptr2 = ptr1 + 3;
//   cout<<*ptr2<<" ";
//   cout<<ptr2 - ptr1;
//  int a[] = {1, 2, 3, 4};
//     fun(a + 1);
//     cout << a[0];
// int x = 5;
//   P(&x);
//   cout<<x;
// int a = 10;
// int *p = &a;
// cout<<"*p"<<*p<<endl;
// int **q = &p;
// cout<<"**q"<<**q<<endl;
// int b = 20;
// *q = &b;
// cout<<"*q"<<*q<<endl;
// (*p)++;
// cout << a << " " << b << endl;
//  int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a);
int a[6] = {1, 2, 3};
cout << (a + 2);
}
