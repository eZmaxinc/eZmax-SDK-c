#ifndef descriptionstatic_response_compound_TEST
#define descriptionstatic_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define descriptionstatic_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/descriptionstatic_response_compound.h"
descriptionstatic_response_compound_t* instantiate_descriptionstatic_response_compound(int include_optional);



descriptionstatic_response_compound_t* instantiate_descriptionstatic_response_compound(int include_optional) {
  descriptionstatic_response_compound_t* descriptionstatic_response_compound = NULL;
  if (include_optional) {
    descriptionstatic_response_compound = descriptionstatic_response_compound_create(
      37,
      "Static description"
    );
  } else {
    descriptionstatic_response_compound = descriptionstatic_response_compound_create(
      37,
      "Static description"
    );
  }

  return descriptionstatic_response_compound;
}


#ifdef descriptionstatic_response_compound_MAIN

void test_descriptionstatic_response_compound(int include_optional) {
    descriptionstatic_response_compound_t* descriptionstatic_response_compound_1 = instantiate_descriptionstatic_response_compound(include_optional);

	cJSON* jsondescriptionstatic_response_compound_1 = descriptionstatic_response_compound_convertToJSON(descriptionstatic_response_compound_1);
	printf("descriptionstatic_response_compound :\n%s\n", cJSON_Print(jsondescriptionstatic_response_compound_1));
	descriptionstatic_response_compound_t* descriptionstatic_response_compound_2 = descriptionstatic_response_compound_parseFromJSON(jsondescriptionstatic_response_compound_1);
	cJSON* jsondescriptionstatic_response_compound_2 = descriptionstatic_response_compound_convertToJSON(descriptionstatic_response_compound_2);
	printf("repeating descriptionstatic_response_compound:\n%s\n", cJSON_Print(jsondescriptionstatic_response_compound_2));
}

int main() {
  test_descriptionstatic_response_compound(1);
  test_descriptionstatic_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // descriptionstatic_response_compound_MAIN
#endif // descriptionstatic_response_compound_TEST
