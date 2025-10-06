/* This program demonstrates basic arithmetic operations in C++ */

int main() {

    int x = 4, y = 2;

    int z = x + y;  // z now equals 6
    z = x / y;  // z now equals 2
    z = x % y;  // z now equals 0
    z = --x;    // decrement x by 1, so x is now 3, and then assign it to z, so z is now 3
    z = y++;    // firstly creates a copy of y, then increments y by 1, so y is now 3

    int y = 4 + 2 * (6 / 3);

    return 0;
}




/*

+	Addition	x + y	x plus y
-	Subtraction	x - y	x minus y
*	Multiplication	x * y	x multiplied by y
/	Division	x / y	x divided by y
%	Modulus	x % y	The remainder of x divided by y
++	Pre-increment	++x	Increment x, then return x
--	Pre-decrement	--x	Decrement x, then return x
++	Post-increment	x++	Copy x, then increment x, then return the copy
--	Post-decrement	x--	Copy x, then decrement x, then return the copy


=	x = 5	Assign 5 to x
+=	x += 5	Add 5 to existing value of x
-=	x -= 5	Subtract 5 from existing value of x
*=	x *= 5	Multiply existing value of x by 5
/=	x /= 5	Divide existing value of x by 5
%=	x %= 5	Modulus existing value of x by 5


==	Equal to	x == y	Is x equal to y?
!=	Not equal to	x != y	Is x not equal to y?
>	Greater than	x > y	Is x greater than y?
<	Less than	x < y	Is x less than y?
>=	Greater than or equal to	x >= y	Is x greater than or equal to y?
<=	Less than or equal to	x <= y	Is x less than or equal to y?


&&	Logical AND	x && y	true if both x and y are true, false otherwise
||	Logical OR	x || y	true if either x or y are true, false otherwise
!	Logical NOT	!x	true if x is false, or false if x is true


<<	Left shift	x << y	shift bits in x left by y
>>	Right shift	x >> y	shift bits in x right by y
~	bitwise NOT	~x	flip all bits in x
&	bitwise AND	x & y	each bit in x AND each bit in y
|	bitwise OR	x | y	each bit in x OR each bit in y
^	bitwise XOR	x ^ y	each bit in x XOR each bit in y




*/