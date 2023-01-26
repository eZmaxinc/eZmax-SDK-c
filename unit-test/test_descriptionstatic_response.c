#ifndef descriptionstatic_response_TEST
#define descriptionstatic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define descriptionstatic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/descriptionstatic_response.h"
descriptionstatic_response_t* instantiate_descriptionstatic_response(int include_optional);



descriptionstatic_response_t* instantiate_descriptionstatic_response(int include_optional) {
  descriptionstatic_response_t* descriptionstatic_response = NULL;
  if (include_optional) {
    descriptionstatic_response = descriptionstatic_response_create(
      37,
      "Static description"
    );
  } else {
    descriptionstatic_response = descriptionstatic_response_create(
      37,
      "Static description"
    );
  }

  return descriptionstatic_response;
}


#ifdef descriptionstatic_response_MAIN

void test_descriptionstatic_response(int include_optional) {
    descriptionstatic_response_t* descriptionstatic_response_1 = instantiate_descriptionstatic_response(include_optional);

	cJSON* jsondescriptionstatic_response_1 = descriptionstatic_response_convertToJSON(descriptionstatic_response_1);
	printf("descriptionstatic_response :\n%s\n", cJSON_Print(jsondescriptionstatic_response_1));
	descriptionstatic_response_t* descriptionstatic_response_2 = descriptionstatic_response_parseFromJSON(jsondescriptionstatic_response_1);
	cJSON* jsondescriptionstatic_response_2 = descriptionstatic_response_convertToJSON(descriptionstatic_response_2);
	printf("repeating descriptionstatic_response:\n%s\n", cJSON_Print(jsondescriptionstatic_response_2));
}

int main() {
  test_descriptionstatic_response(1);
  test_descriptionstatic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // descriptionstatic_response_MAIN
#endif // descriptionstatic_response_TEST
