#ifndef field_e_ezsignsignature_consultationtrigger_TEST
#define field_e_ezsignsignature_consultationtrigger_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignsignature_consultationtrigger_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignsignature_consultationtrigger.h"
field_e_ezsignsignature_consultationtrigger_t* instantiate_field_e_ezsignsignature_consultationtrigger(int include_optional);



field_e_ezsignsignature_consultationtrigger_t* instantiate_field_e_ezsignsignature_consultationtrigger(int include_optional) {
  field_e_ezsignsignature_consultationtrigger_t* field_e_ezsignsignature_consultationtrigger = NULL;
  if (include_optional) {
    field_e_ezsignsignature_consultationtrigger = field_e_ezsignsignature_consultationtrigger_create(
    );
  } else {
    field_e_ezsignsignature_consultationtrigger = field_e_ezsignsignature_consultationtrigger_create(
    );
  }

  return field_e_ezsignsignature_consultationtrigger;
}


#ifdef field_e_ezsignsignature_consultationtrigger_MAIN

void test_field_e_ezsignsignature_consultationtrigger(int include_optional) {
    field_e_ezsignsignature_consultationtrigger_t* field_e_ezsignsignature_consultationtrigger_1 = instantiate_field_e_ezsignsignature_consultationtrigger(include_optional);

	cJSON* jsonfield_e_ezsignsignature_consultationtrigger_1 = field_e_ezsignsignature_consultationtrigger_convertToJSON(field_e_ezsignsignature_consultationtrigger_1);
	printf("field_e_ezsignsignature_consultationtrigger :\n%s\n", cJSON_Print(jsonfield_e_ezsignsignature_consultationtrigger_1));
	field_e_ezsignsignature_consultationtrigger_t* field_e_ezsignsignature_consultationtrigger_2 = field_e_ezsignsignature_consultationtrigger_parseFromJSON(jsonfield_e_ezsignsignature_consultationtrigger_1);
	cJSON* jsonfield_e_ezsignsignature_consultationtrigger_2 = field_e_ezsignsignature_consultationtrigger_convertToJSON(field_e_ezsignsignature_consultationtrigger_2);
	printf("repeating field_e_ezsignsignature_consultationtrigger:\n%s\n", cJSON_Print(jsonfield_e_ezsignsignature_consultationtrigger_2));
}

int main() {
  test_field_e_ezsignsignature_consultationtrigger(1);
  test_field_e_ezsignsignature_consultationtrigger(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignsignature_consultationtrigger_MAIN
#endif // field_e_ezsignsignature_consultationtrigger_TEST
