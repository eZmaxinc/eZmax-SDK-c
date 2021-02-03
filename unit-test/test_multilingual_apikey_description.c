#ifndef multilingual_apikey_description_TEST
#define multilingual_apikey_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_apikey_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_apikey_description.h"
multilingual_apikey_description_t* instantiate_multilingual_apikey_description(int include_optional);



multilingual_apikey_description_t* instantiate_multilingual_apikey_description(int include_optional) {
  multilingual_apikey_description_t* multilingual_apikey_description = NULL;
  if (include_optional) {
    multilingual_apikey_description = multilingual_apikey_description_create(
      "0",
      "0"
    );
  } else {
    multilingual_apikey_description = multilingual_apikey_description_create(
      "0",
      "0"
    );
  }

  return multilingual_apikey_description;
}


#ifdef multilingual_apikey_description_MAIN

void test_multilingual_apikey_description(int include_optional) {
    multilingual_apikey_description_t* multilingual_apikey_description_1 = instantiate_multilingual_apikey_description(include_optional);

	cJSON* jsonmultilingual_apikey_description_1 = multilingual_apikey_description_convertToJSON(multilingual_apikey_description_1);
	printf("multilingual_apikey_description :\n%s\n", cJSON_Print(jsonmultilingual_apikey_description_1));
	multilingual_apikey_description_t* multilingual_apikey_description_2 = multilingual_apikey_description_parseFromJSON(jsonmultilingual_apikey_description_1);
	cJSON* jsonmultilingual_apikey_description_2 = multilingual_apikey_description_convertToJSON(multilingual_apikey_description_2);
	printf("repeating multilingual_apikey_description:\n%s\n", cJSON_Print(jsonmultilingual_apikey_description_2));
}

int main() {
  test_multilingual_apikey_description(1);
  test_multilingual_apikey_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_apikey_description_MAIN
#endif // multilingual_apikey_description_TEST
