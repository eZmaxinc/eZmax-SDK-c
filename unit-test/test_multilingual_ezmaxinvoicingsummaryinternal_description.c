#ifndef multilingual_ezmaxinvoicingsummaryinternal_description_TEST
#define multilingual_ezmaxinvoicingsummaryinternal_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_ezmaxinvoicingsummaryinternal_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_ezmaxinvoicingsummaryinternal_description.h"
multilingual_ezmaxinvoicingsummaryinternal_description_t* instantiate_multilingual_ezmaxinvoicingsummaryinternal_description(int include_optional);



multilingual_ezmaxinvoicingsummaryinternal_description_t* instantiate_multilingual_ezmaxinvoicingsummaryinternal_description(int include_optional) {
  multilingual_ezmaxinvoicingsummaryinternal_description_t* multilingual_ezmaxinvoicingsummaryinternal_description = NULL;
  if (include_optional) {
    multilingual_ezmaxinvoicingsummaryinternal_description = multilingual_ezmaxinvoicingsummaryinternal_description_create(
      "Défaut",
      "Défault"
    );
  } else {
    multilingual_ezmaxinvoicingsummaryinternal_description = multilingual_ezmaxinvoicingsummaryinternal_description_create(
      "Défaut",
      "Défault"
    );
  }

  return multilingual_ezmaxinvoicingsummaryinternal_description;
}


#ifdef multilingual_ezmaxinvoicingsummaryinternal_description_MAIN

void test_multilingual_ezmaxinvoicingsummaryinternal_description(int include_optional) {
    multilingual_ezmaxinvoicingsummaryinternal_description_t* multilingual_ezmaxinvoicingsummaryinternal_description_1 = instantiate_multilingual_ezmaxinvoicingsummaryinternal_description(include_optional);

	cJSON* jsonmultilingual_ezmaxinvoicingsummaryinternal_description_1 = multilingual_ezmaxinvoicingsummaryinternal_description_convertToJSON(multilingual_ezmaxinvoicingsummaryinternal_description_1);
	printf("multilingual_ezmaxinvoicingsummaryinternal_description :\n%s\n", cJSON_Print(jsonmultilingual_ezmaxinvoicingsummaryinternal_description_1));
	multilingual_ezmaxinvoicingsummaryinternal_description_t* multilingual_ezmaxinvoicingsummaryinternal_description_2 = multilingual_ezmaxinvoicingsummaryinternal_description_parseFromJSON(jsonmultilingual_ezmaxinvoicingsummaryinternal_description_1);
	cJSON* jsonmultilingual_ezmaxinvoicingsummaryinternal_description_2 = multilingual_ezmaxinvoicingsummaryinternal_description_convertToJSON(multilingual_ezmaxinvoicingsummaryinternal_description_2);
	printf("repeating multilingual_ezmaxinvoicingsummaryinternal_description:\n%s\n", cJSON_Print(jsonmultilingual_ezmaxinvoicingsummaryinternal_description_2));
}

int main() {
  test_multilingual_ezmaxinvoicingsummaryinternal_description(1);
  test_multilingual_ezmaxinvoicingsummaryinternal_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_ezmaxinvoicingsummaryinternal_description_MAIN
#endif // multilingual_ezmaxinvoicingsummaryinternal_description_TEST
