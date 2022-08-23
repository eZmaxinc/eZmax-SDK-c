#ifndef multilingual_branding_description_TEST
#define multilingual_branding_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_branding_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_branding_description.h"
multilingual_branding_description_t* instantiate_multilingual_branding_description(int include_optional);



multilingual_branding_description_t* instantiate_multilingual_branding_description(int include_optional) {
  multilingual_branding_description_t* multilingual_branding_description = NULL;
  if (include_optional) {
    multilingual_branding_description = multilingual_branding_description_create(
      "Compagnie X",
      "Company X"
    );
  } else {
    multilingual_branding_description = multilingual_branding_description_create(
      "Compagnie X",
      "Company X"
    );
  }

  return multilingual_branding_description;
}


#ifdef multilingual_branding_description_MAIN

void test_multilingual_branding_description(int include_optional) {
    multilingual_branding_description_t* multilingual_branding_description_1 = instantiate_multilingual_branding_description(include_optional);

	cJSON* jsonmultilingual_branding_description_1 = multilingual_branding_description_convertToJSON(multilingual_branding_description_1);
	printf("multilingual_branding_description :\n%s\n", cJSON_Print(jsonmultilingual_branding_description_1));
	multilingual_branding_description_t* multilingual_branding_description_2 = multilingual_branding_description_parseFromJSON(jsonmultilingual_branding_description_1);
	cJSON* jsonmultilingual_branding_description_2 = multilingual_branding_description_convertToJSON(multilingual_branding_description_2);
	printf("repeating multilingual_branding_description:\n%s\n", cJSON_Print(jsonmultilingual_branding_description_2));
}

int main() {
  test_multilingual_branding_description(1);
  test_multilingual_branding_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_branding_description_MAIN
#endif // multilingual_branding_description_TEST
