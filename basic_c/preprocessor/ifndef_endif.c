#include <stdio.h>
#include "ifndef_endif.h"

int main(void) {
	printf("%d\n", a);
	return 0;
}

// Above is a working example which shows how to use the
// ifndef, Below will show why this is necessary,
// lets create a minimum header which is needed to execute our
// above program as,

// vim ifndef_endif.h

// int a = 10;
// save and close this ifndef_endif.h

// Now create new ifndef_endif.c as,

// #include <stdio.h>
// #include "ifndef_endif.h"
// #include "ifndef_endif.h"

// int main(void) {
//        printf("%d\n", a);
//        return 0;
// }

// So this new C file has tried to inclue ifndef_endif.h twice
// which can happen when we are writing large amount of code
// in practical.

// now try to compile this c code and c what it shows.

// In file included from ifndef_endif.c:3:0:
// ifndef_endif.h:1:5: error: redefinition of ‘a’
//  int a = 10;
//     ^

// In file included from ifndef_endif.c:2:0:
// ifndef_endif.h:1:5: note: previous definition of ‘a’ was here
// int a = 10;

