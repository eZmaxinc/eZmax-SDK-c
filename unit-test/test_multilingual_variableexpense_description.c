#ifndef multilingual_variableexpense_description_TEST
#define multilingual_variableexpense_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_variableexpense_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_variableexpense_description.h"
multilingual_variableexpense_description_t* instantiate_multilingual_variableexpense_description(int include_optional);



multilingual_variableexpense_description_t* instantiate_multilingual_variableexpense_description(int include_optional) {
  multilingual_variableexpense_description_t* multilingual_variableexpense_description = NULL;
  if (include_optional) {
    multilingual_variableexpense_description = multilingual_variableexpense_description_create(
      "Équipements de bureau",
      "Office equipment"
    );
  } else {
    multilingual_variableexpense_description = multilingual_variableexpense_description_create(
      "Équipements de bureau",
      "Office equipment"
    );
  }

  return multilingual_variableexpense_description;
}


#ifdef multilingual_variableexpense_description_MAIN

void test_multilingual_variableexpense_description(int include_optional) {
    multilingual_variableexpense_description_t* multilingual_variableexpense_description_1 = instantiate_multilingual_variableexpense_description(include_optional);

	cJSON* jsonmultilingual_variableexpense_description_1 = multilingual_variableexpense_description_convertToJSON(multilingual_variableexpense_description_1);
	printf("multilingual_variableexpense_description :\n%s\n", cJSON_Print(jsonmultilingual_variableexpense_description_1));
	multilingual_variableexpense_description_t* multilingual_variableexpense_description_2 = multilingual_variableexpense_description_parseFromJSON(jsonmultilingual_variableexpense_description_1);
	cJSON* jsonmultilingual_variableexpense_description_2 = multilingual_variableexpense_description_convertToJSON(multilingual_variableexpense_description_2);
	printf("repeating multilingual_variableexpense_description:\n%s\n", cJSON_Print(jsonmultilingual_variableexpense_description_2));
}

int main() {
  test_multilingual_variableexpense_description(1);
  test_multilingual_variableexpense_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_variableexpense_description_MAIN
#endif // multilingual_variableexpense_description_TEST
