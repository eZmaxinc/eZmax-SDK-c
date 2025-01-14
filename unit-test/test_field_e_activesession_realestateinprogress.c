#ifndef field_e_activesession_realestateinprogress_TEST
#define field_e_activesession_realestateinprogress_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_activesession_realestateinprogress_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_activesession_realestateinprogress.h"
field_e_activesession_realestateinprogress_t* instantiate_field_e_activesession_realestateinprogress(int include_optional);



field_e_activesession_realestateinprogress_t* instantiate_field_e_activesession_realestateinprogress(int include_optional) {
  field_e_activesession_realestateinprogress_t* field_e_activesession_realestateinprogress = NULL;
  if (include_optional) {
    field_e_activesession_realestateinprogress = field_e_activesession_realestateinprogress_create(
    );
  } else {
    field_e_activesession_realestateinprogress = field_e_activesession_realestateinprogress_create(
    );
  }

  return field_e_activesession_realestateinprogress;
}


#ifdef field_e_activesession_realestateinprogress_MAIN

void test_field_e_activesession_realestateinprogress(int include_optional) {
    field_e_activesession_realestateinprogress_t* field_e_activesession_realestateinprogress_1 = instantiate_field_e_activesession_realestateinprogress(include_optional);

	cJSON* jsonfield_e_activesession_realestateinprogress_1 = field_e_activesession_realestateinprogress_convertToJSON(field_e_activesession_realestateinprogress_1);
	printf("field_e_activesession_realestateinprogress :\n%s\n", cJSON_Print(jsonfield_e_activesession_realestateinprogress_1));
	field_e_activesession_realestateinprogress_t* field_e_activesession_realestateinprogress_2 = field_e_activesession_realestateinprogress_parseFromJSON(jsonfield_e_activesession_realestateinprogress_1);
	cJSON* jsonfield_e_activesession_realestateinprogress_2 = field_e_activesession_realestateinprogress_convertToJSON(field_e_activesession_realestateinprogress_2);
	printf("repeating field_e_activesession_realestateinprogress:\n%s\n", cJSON_Print(jsonfield_e_activesession_realestateinprogress_2));
}

int main() {
  test_field_e_activesession_realestateinprogress(1);
  test_field_e_activesession_realestateinprogress(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_activesession_realestateinprogress_MAIN
#endif // field_e_activesession_realestateinprogress_TEST
