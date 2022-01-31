#ifndef xxxx_TEST
#define xxxx_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define xxxx_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/xxxx.h"
xxxx_t* instantiate_xxxx(int include_optional);



xxxx_t* instantiate_xxxx(int include_optional) {
  xxxx_t* xxxx = NULL;
  if (include_optional) {
    xxxx = xxxx_create(
      1,
      1
    );
  } else {
    xxxx = xxxx_create(
      1,
      1
    );
  }

  return xxxx;
}


#ifdef xxxx_MAIN

void test_xxxx(int include_optional) {
    xxxx_t* xxxx_1 = instantiate_xxxx(include_optional);

	cJSON* jsonxxxx_1 = xxxx_convertToJSON(xxxx_1);
	printf("xxxx :\n%s\n", cJSON_Print(jsonxxxx_1));
	xxxx_t* xxxx_2 = xxxx_parseFromJSON(jsonxxxx_1);
	cJSON* jsonxxxx_2 = xxxx_convertToJSON(xxxx_2);
	printf("repeating xxxx:\n%s\n", cJSON_Print(jsonxxxx_2));
}

int main() {
  test_xxxx(1);
  test_xxxx(0);

  printf("Hello world \n");
  return 0;
}

#endif // xxxx_MAIN
#endif // xxxx_TEST
