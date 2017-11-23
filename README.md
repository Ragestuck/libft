# libft
Libft

Here is my libft for the 42 project named 'libft'

This lib works with 42 Files Checker
  author files        -> rjakubec
  required functions  -> All files were found
  bonus               -> All files were found
  extra functions     -> 5 extra functions were found
  norminette          -> All files passed the tests
  static declarations -> All auxiliary functions are declared as static
  makefile            -> All tests passed
  forbidden functions -> No forbidden function found
  moulitest           -> All Unit Tests passed
  libft-unit-test     -> All Unit Tests passed
  maintest            -> All tests passed (49 tests)

This lib works with libftest
  --------------------------------------------------------------------------------------------
|                                     CHECKING FILES                                       |
--------------------------------------------------------------------------------------------

Makefile      -Wall     -Wextra   -Werror
found         ok        ok        ok

Author file   Check file content
found         rjakubec

Header file   Norme
found         ok

--------------------------------------------------------------------------------------------
|                                    COMPILING LIBFT                                       |
--------------------------------------------------------------------------------------------

rule all        rule $(NAME)     rule clean       rule fclean     make re         libft.a
found           found            found            found           ok              found

--------------------------------------------------------------------------------------------
|                                     STARTING TESTS                                       |
--------------------------------------------------------------------------------------------

Part1 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_memset             ok             success     clean            ✓✓✓✓                OK
ft_bzero              ok             success     clean            ✓✓                  OK
ft_memcpy             ok             success     clean            ✓✓✓                 OK
ft_memccpy            ok             success     clean            ✓✓✓✓                OK
ft_memmove            ok             success     clean            ✓✓✓✓✓               OK
ft_memchr             ok             success     clean            ✓✓✓✓✓✓              OK
ft_memcmp             ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK
ft_strlen             ok             success     clean            ✓✓✓✓✓✓              OK
ft_strdup             ok             success     clean            ✓                   OK
ft_strcpy             ok             success     clean            ✓✓✓                 OK
ft_strncpy            ok             success     clean            ✓✓✓✓✓✓              OK
ft_strcat             ok             success     clean            ✓✓✓                 OK
ft_strncat            ok             success     clean            ✓✓✓✓✓               OK
ft_strlcat            ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK
ft_strchr             ok             success     clean            ✓✓✓✓✓✓              OK
ft_strrchr            ok             success     clean            ✓✓✓✓✓✓✓✓            OK
ft_strstr             ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_strnstr            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓          OK
ft_strcmp             ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_strncmp            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓         OK
ft_atoi               ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓✓ OK
ft_isalpha            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isdigit            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isalnum            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_isascii            ok             success     clean            ✓✓✓✓✓✓✓✓            OK
ft_isprint            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_toupper            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_tolower            ok             success     clean            ✓✓✓✓✓✓✓             OK

Total : 28/28

Part2 functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_memalloc           ok             success     clean            ✓                   OK
ft_memdel             ok             success     clean            ✓                   OK
ft_strnew             ok             success     clean            ✓✓                  OK
ft_strdel             ok             success     clean            ✓                   OK
ft_strclr             ok             success     clean            ✓                   OK
ft_striter            ok             success     clean            ✓                   OK
ft_striteri           ok             success     clean            ✓                   OK
ft_strmap             ok             success     clean            ✓                   OK
ft_strmapi            ok             success     clean            ✓                   OK
ft_strequ             ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_strnequ            ok             success     clean            ✓✓✓✓✓✓✓✓✓✓✓         OK
ft_strsub             ok             success     clean            ✓✓✓✓                OK
ft_strjoin            ok             success     clean            ✓✓✓✓                OK
ft_strtrim            ok             success     clean            ✓✓✓✓✓               OK
ft_strsplit           ok             success     clean            ✓✓✓✓✓               OK
ft_itoa               ok             success     clean            ✓✓✓✓✓✓✓✓✓✓          OK
ft_putchar            ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_putstr             ok             success     clean            ✓✓✓✓                OK
ft_putendl            ok             success     clean            ✓✓✓✓                OK
ft_putnbr             ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK
ft_putchar_fd         ok             success     clean            ✓✓✓✓✓✓✓             OK
ft_putstr_fd          ok             success     clean            ✓✓✓✓                OK
ft_putendl_fd         ok             success     clean            ✓✓✓✓                OK
ft_putnbr_fd          ok             success     clean            ✓✓✓✓✓✓✓✓✓           OK

Total : 24/24

Bonus functions

FUNCTION              NORME          COMPIL.     FORBIDDEN FUNC.  TESTS               RESULT
ft_lstnew             ok             success     clean            ✓✓✓                 OK
ft_lstdelone          ok             success     clean            ✓                   OK
ft_lstdel             ok             success     clean            ✓                   OK
ft_lstadd             ok             success     clean            ✓                   OK
ft_lstiter            ok             success     clean            ✓                   OK
ft_lstmap             ok             success     clean            ✓                   OK

Total : 6/6
Abort : A Bus error : B Segmentation fault : S Timeout : T Nothing turned in : NTI

Here it is. Good Luck for your libft
