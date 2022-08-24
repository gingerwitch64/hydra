# N11 Software Coding Style
This document contains information on the general coding guidelines are for 
N11 Software. Being honest, this coding style is our (mainly, levi and
ariston's) personal preference and we'll try not to **force** it down your
throat, but this is preferred for any and all N11 projects. Please try your
best to adhere to this.
<br>
First off, I'd suggest printing out a copy of the GNU coding standards, and 
NOT read it. Burn them, it's a great symbolic gesture.
<br>
Anyway, here goes:

## Indentation

### Tabs vs. Spaces
Tabs should be used in place of spaces when indenting code.

### Indent Size
Indent size is 4 spaces. This should be a good indicator of when you have
over-engineered your code. If you need around 3-6 levels of indentation,
you might want to consider fixing some parts of your code; >6 levels and 
your best bet is restart the whole thing and write it again.

```cpp
int foo() {
	int bar = 0;
	int baz = 0;
	int qux = 0;
}
```

### Bracket Placing
Brackets should be on the same line as its parent statement.
```cpp
if (foo == true) {
	// code.
}

int main(int x) {
	// more code.
}
```

### Line Length
80 is the recommended maximum for line length. What do we mean by 'recommended'?
If your statement just happens to go slightly over the line (anymore from around
81-90) is plausible considering indentation and the fact that it's just slightly
over the limit so we don't really care. If you do go over this limit, it's a
good time to check to see if something is over-engineered. In the case of emails,
commit descriptions, etc., these should all follow the 80 line limit since it's
better for our (by default) 80 x 60 terminal windows.

## Naming

### Hungarian Notation
"Hungarian Notation" was a common practice back in 90's C/C++ style for Windows
and is still used today in some projects. We have adopted use of it in N11.
This part isn't a 'requirement' since in some use cases, it really doesn't
matter or it just doesn't look good in which we'll break this section. We still
encourage you to do this as much as you can but there isn't usually any need
to.

| Prefix | Description   |
|--------|---------------|
| b      | Boolean       |
| c      | Counter       |
| C		 | Class		 |
| g_     | Global        |
| i      | Integers      |
| m_     | Class members |
| s_	 | Static		 |

### Naming Style
We use CamelCase for everything (file names, functions, etc..). Capitalize the
first letter in classes and structs. Lowercase the first letter in a variable
or function name.

```cpp
struct Data
size_t bufferSize;
class CHTMLDocument;
String mimeType();
```

## Comments

### Comment Header
We haven't enforced this too much lately but, try your best to put this at
the top of files.
```cpp
//========= Copyright N11 Software, All rights reserved. ============//
//
// File: ---
// Purpose: ---
// Maintainer: ---
//
//===================================================================//
```

### Multi-Line Comments
```cpp
/*
 * This is the preferred style for multi-line
 * comments in all N11 project source code.
 * Please use it consistently.
 *
 * Description:  A column of asterisks on the left side,
 * with beginning and ending almost-blank lines.
 */
```

### Function Documentation
```cpp
/**
 * function_name() - Brief description of function.
 * @arg1: Describe the first argument.
 * @arg2: Describe the second argument.
 *        One can provide multiple line descriptions
 *        for arguments.
 *
 * A longer description, with more discussion of the function function_name()
 * that might be useful to those using or modifying it. Begins with an
 * empty comment line, and may include additional embedded empty
 * comment lines.
 *
 * The longer description may have multiple paragraphs.
 *
 * Context: Describes whether the function can sleep, what locks it takes,
 *          releases, or expects to be held. It can extend over multiple
 *          lines.
 * Return: Describe the return value of function_name.
 *
 * The return value description can also have multiple paragraphs, and should
 * be placed at the end of the comment block.
 */
```
**NOTE**
<br>
If the `@argument` has multiple lines, the continuation should start on the
same column as the previous line.
```cpp
/**
 * @argument: some long description
 *            that continues on next lines
 */
```
or:
```cpp
/**
 * @argument:
 *         some long description
 *         that continues on next lines
 */
```
Any return values should be in a dedicated section called `Return`.
```cpp
/**
 * Return:
 * 0 - OK
 * -EINVAL - invalid argument
 * -ENOMEM - out of memory
 */
```

### #endif
All `#endif` statements must have a comment to what `#if`/`#ifndef`; it belongs to.
