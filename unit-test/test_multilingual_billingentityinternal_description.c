#ifndef multilingual_billingentityinternal_description_TEST
#define multilingual_billingentityinternal_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_billingentityinternal_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_billingentityinternal_description.h"
multilingual_billingentityinternal_description_t* instantiate_multilingual_billingentityinternal_description(int include_optional);



multilingual_billingentityinternal_description_t* instantiate_multilingual_billingentityinternal_description(int include_optional) {
  multilingual_billingentityinternal_description_t* multilingual_billingentityinternal_description = NULL;
  if (include_optional) {
    multilingual_billingentityinternal_description = multilingual_billingentityinternal_description_create(
      "Défaut",
      "Default"
    );
  } else {
    multilingual_billingentityinternal_description = multilingual_billingentityinternal_description_create(
      "Défaut",
      "Default"
    );
  }

  return multilingual_billingentityinternal_description;
}


#ifdef multilingual_billingentityinternal_description_MAIN

void test_multilingual_billingentityinternal_description(int include_optional) {
    multilingual_billingentityinternal_description_t* multilingual_billingentityinternal_description_1 = instantiate_multilingual_billingentityinternal_description(include_optional);

	cJSON* jsonmultilingual_billingentityinternal_description_1 = multilingual_billingentityinternal_description_convertToJSON(multilingual_billingentityinternal_description_1);
	printf("multilingual_billingentityinternal_description :\n%s\n", cJSON_Print(jsonmultilingual_billingentityinternal_description_1));
	multilingual_billingentityinternal_description_t* multilingual_billingentityinternal_description_2 = multilingual_billingentityinternal_description_parseFromJSON(jsonmultilingual_billingentityinternal_description_1);
	cJSON* jsonmultilingual_billingentityinternal_description_2 = multilingual_billingentityinternal_description_convertToJSON(multilingual_billingentityinternal_description_2);
	printf("repeating multilingual_billingentityinternal_description:\n%s\n", cJSON_Print(jsonmultilingual_billingentityinternal_description_2));
}

int main() {
  test_multilingual_billingentityinternal_description(1);
  test_multilingual_billingentityinternal_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_billingentityinternal_description_MAIN
#endif // multilingual_billingentityinternal_description_TEST
