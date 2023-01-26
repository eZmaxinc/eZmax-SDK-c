#ifndef phonestatic_response_compound_TEST
#define phonestatic_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phonestatic_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phonestatic_response_compound.h"
phonestatic_response_compound_t* instantiate_phonestatic_response_compound(int include_optional);



phonestatic_response_compound_t* instantiate_phonestatic_response_compound(int include_optional) {
  phonestatic_response_compound_t* phonestatic_response_compound = NULL;
  if (include_optional) {
    phonestatic_response_compound = phonestatic_response_compound_create(
      1,
      "+15149901516",
      "123"
    );
  } else {
    phonestatic_response_compound = phonestatic_response_compound_create(
      1,
      "+15149901516",
      "123"
    );
  }

  return phonestatic_response_compound;
}


#ifdef phonestatic_response_compound_MAIN

void test_phonestatic_response_compound(int include_optional) {
    phonestatic_response_compound_t* phonestatic_response_compound_1 = instantiate_phonestatic_response_compound(include_optional);

	cJSON* jsonphonestatic_response_compound_1 = phonestatic_response_compound_convertToJSON(phonestatic_response_compound_1);
	printf("phonestatic_response_compound :\n%s\n", cJSON_Print(jsonphonestatic_response_compound_1));
	phonestatic_response_compound_t* phonestatic_response_compound_2 = phonestatic_response_compound_parseFromJSON(jsonphonestatic_response_compound_1);
	cJSON* jsonphonestatic_response_compound_2 = phonestatic_response_compound_convertToJSON(phonestatic_response_compound_2);
	printf("repeating phonestatic_response_compound:\n%s\n", cJSON_Print(jsonphonestatic_response_compound_2));
}

int main() {
  test_phonestatic_response_compound(1);
  test_phonestatic_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // phonestatic_response_compound_MAIN
#endif // phonestatic_response_compound_TEST
