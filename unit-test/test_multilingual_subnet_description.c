#ifndef multilingual_subnet_description_TEST
#define multilingual_subnet_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_subnet_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_subnet_description.h"
multilingual_subnet_description_t* instantiate_multilingual_subnet_description(int include_optional);



multilingual_subnet_description_t* instantiate_multilingual_subnet_description(int include_optional) {
  multilingual_subnet_description_t* multilingual_subnet_description = NULL;
  if (include_optional) {
    multilingual_subnet_description = multilingual_subnet_description_create(
      "Bureau chef",
      "Head office"
    );
  } else {
    multilingual_subnet_description = multilingual_subnet_description_create(
      "Bureau chef",
      "Head office"
    );
  }

  return multilingual_subnet_description;
}


#ifdef multilingual_subnet_description_MAIN

void test_multilingual_subnet_description(int include_optional) {
    multilingual_subnet_description_t* multilingual_subnet_description_1 = instantiate_multilingual_subnet_description(include_optional);

	cJSON* jsonmultilingual_subnet_description_1 = multilingual_subnet_description_convertToJSON(multilingual_subnet_description_1);
	printf("multilingual_subnet_description :\n%s\n", cJSON_Print(jsonmultilingual_subnet_description_1));
	multilingual_subnet_description_t* multilingual_subnet_description_2 = multilingual_subnet_description_parseFromJSON(jsonmultilingual_subnet_description_1);
	cJSON* jsonmultilingual_subnet_description_2 = multilingual_subnet_description_convertToJSON(multilingual_subnet_description_2);
	printf("repeating multilingual_subnet_description:\n%s\n", cJSON_Print(jsonmultilingual_subnet_description_2));
}

int main() {
  test_multilingual_subnet_description(1);
  test_multilingual_subnet_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_subnet_description_MAIN
#endif // multilingual_subnet_description_TEST
