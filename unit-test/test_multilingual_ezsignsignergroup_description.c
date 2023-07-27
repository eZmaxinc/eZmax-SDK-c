#ifndef multilingual_ezsignsignergroup_description_TEST
#define multilingual_ezsignsignergroup_description_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define multilingual_ezsignsignergroup_description_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/multilingual_ezsignsignergroup_description.h"
multilingual_ezsignsignergroup_description_t* instantiate_multilingual_ezsignsignergroup_description(int include_optional);



multilingual_ezsignsignergroup_description_t* instantiate_multilingual_ezsignsignergroup_description(int include_optional) {
  multilingual_ezsignsignergroup_description_t* multilingual_ezsignsignergroup_description = NULL;
  if (include_optional) {
    multilingual_ezsignsignergroup_description = multilingual_ezsignsignergroup_description_create(
      "RH",
      "HR"
    );
  } else {
    multilingual_ezsignsignergroup_description = multilingual_ezsignsignergroup_description_create(
      "RH",
      "HR"
    );
  }

  return multilingual_ezsignsignergroup_description;
}


#ifdef multilingual_ezsignsignergroup_description_MAIN

void test_multilingual_ezsignsignergroup_description(int include_optional) {
    multilingual_ezsignsignergroup_description_t* multilingual_ezsignsignergroup_description_1 = instantiate_multilingual_ezsignsignergroup_description(include_optional);

	cJSON* jsonmultilingual_ezsignsignergroup_description_1 = multilingual_ezsignsignergroup_description_convertToJSON(multilingual_ezsignsignergroup_description_1);
	printf("multilingual_ezsignsignergroup_description :\n%s\n", cJSON_Print(jsonmultilingual_ezsignsignergroup_description_1));
	multilingual_ezsignsignergroup_description_t* multilingual_ezsignsignergroup_description_2 = multilingual_ezsignsignergroup_description_parseFromJSON(jsonmultilingual_ezsignsignergroup_description_1);
	cJSON* jsonmultilingual_ezsignsignergroup_description_2 = multilingual_ezsignsignergroup_description_convertToJSON(multilingual_ezsignsignergroup_description_2);
	printf("repeating multilingual_ezsignsignergroup_description:\n%s\n", cJSON_Print(jsonmultilingual_ezsignsignergroup_description_2));
}

int main() {
  test_multilingual_ezsignsignergroup_description(1);
  test_multilingual_ezsignsignergroup_description(0);

  printf("Hello world \n");
  return 0;
}

#endif // multilingual_ezsignsignergroup_description_MAIN
#endif // multilingual_ezsignsignergroup_description_TEST
