# ASCII Table & Conversions

Below are the key ASCII character decimal mappings commonly used in competitive programming:

| Decimal | Character | Description |
|---|---|---|
| 0 | `\0` | NULL character |
| 10 | `\n` | Line feed (newline) |
| 32 | ` ` | Space |
| 48 - 57 | `0` - `9` | Digits (0 to 9) |
| 65 - 90 | `A` - `Z` | Uppercase letters (A to Z) |
| 97 - 122 | `a` - `z` | Lowercase letters (a to z) |

### Key Conversions in C++
* Convert character digit to integer: `char_digit - '0'` (e.g. `'5' - '0' == 5`)
* Convert lowercase to uppercase: `char_lower - 'a' + 'A'` (or using `toupper()`)
* Convert uppercase to lowercase: `char_upper - 'A' + 'a'` (or using `tolower()`)
