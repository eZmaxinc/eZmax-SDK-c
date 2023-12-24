#ifndef multilingual_ezsignsigningreason_description_TEST
#define multilingual_ezsignsigningreason_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_ezsignsigningreason_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_ezsignsigningreason_description.h"
multilingual_ezsignsigningreason_description_t* instantiate_multilingual_ezsignsigningreason_description(int include_optional);



multilingual_ezsignsigningreason_description_t* instantiate_multilingual_ezsignsigningreason_description(int include_optional) {
  multilingual_ezsignsigningreason_description_t* multilingual_ezsignsigningreason_description = NULL;
  if (include_optional) {
    multilingual_ezsignsigningreason_description = multilingual_ezsignsigningreason_description_create(
      "J'approuve ce document",
      "I approve this document"
    );
  } else {
    multilingual_ezsignsigningreason_description = multilingual_ezsignsigningreason_description_create(
      "J'approuve ce document",
      "I approve this document"
    );
  }

  return multilingual_ezsignsigningreason_description;
}


#ifdef multilingual_ezsignsigningreason_description_MAIN

void test_multilingual_ezsignsigningreason_description(int include_optional) {
    multilingual_ezsignsigningreason_description_t* multilingual_ezsignsigningreason_description_1 = instantiate_multilingual_ezsignsigningreason_description(include_optional);

	cJSON* jsonmultilingual_ezsignsigningreason_description_1 = multilingual_ezsignsigningreason_description_convertToJSON(multilingual_ezsignsigningreason_description_1);
	printf("multilingual_ezsignsigningreason_description :\n%s\n", cJSON_Print(jsonmultilingual_ezsignsigningreason_description_1));
	multilingual_ezsignsigningreason_description_t* multilingual_ezsignsigningreason_description_2 = multilingual_ezsignsigningreason_description_parseFromJSON(jsonmultilingual_ezsignsigningreason_description_1);
	cJSON* jsonmultilingual_ezsignsigningreason_description_2 = multilingual_ezsignsigningreason_description_convertToJSON(multilingual_ezsignsigningreason_description_2);
	printf("repeating multilingual_ezsignsigningreason_description:\n%s\n", cJSON_Print(jsonmultilingual_ezsignsigningreason_description_2));
}

int main() {
  test_multilingual_ezsignsigningreason_description(1);
  test_multilingual_ezsignsigningreason_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_ezsignsigningreason_description_MAIN
#endif // multilingual_ezsignsigningreason_description_TEST
