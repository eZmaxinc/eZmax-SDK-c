#ifndef phonestatic_response_TEST
#define phonestatic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phonestatic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phonestatic_response.h"
phonestatic_response_t* instantiate_phonestatic_response(int include_optional);



phonestatic_response_t* instantiate_phonestatic_response(int include_optional) {
  phonestatic_response_t* phonestatic_response = NULL;
  if (include_optional) {
    phonestatic_response = phonestatic_response_create(
      1,
      "+15149901516",
      "123"
    );
  } else {
    phonestatic_response = phonestatic_response_create(
      1,
      "+15149901516",
      "123"
    );
  }

  return phonestatic_response;
}


#ifdef phonestatic_response_MAIN

void test_phonestatic_response(int include_optional) {
    phonestatic_response_t* phonestatic_response_1 = instantiate_phonestatic_response(include_optional);

	cJSON* jsonphonestatic_response_1 = phonestatic_response_convertToJSON(phonestatic_response_1);
	printf("phonestatic_response :\n%s\n", cJSON_Print(jsonphonestatic_response_1));
	phonestatic_response_t* phonestatic_response_2 = phonestatic_response_parseFromJSON(jsonphonestatic_response_1);
	cJSON* jsonphonestatic_response_2 = phonestatic_response_convertToJSON(phonestatic_response_2);
	printf("repeating phonestatic_response:\n%s\n", cJSON_Print(jsonphonestatic_response_2));
}

int main() {
  test_phonestatic_response(1);
  test_phonestatic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // phonestatic_response_MAIN
#endif // phonestatic_response_TEST
