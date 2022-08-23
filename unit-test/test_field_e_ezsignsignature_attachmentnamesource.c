#ifndef field_e_ezsignsignature_attachmentnamesource_TEST
#define field_e_ezsignsignature_attachmentnamesource_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsignsignature_attachmentnamesource_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsignsignature_attachmentnamesource.h"
field_e_ezsignsignature_attachmentnamesource_t* instantiate_field_e_ezsignsignature_attachmentnamesource(int include_optional);



field_e_ezsignsignature_attachmentnamesource_t* instantiate_field_e_ezsignsignature_attachmentnamesource(int include_optional) {
  field_e_ezsignsignature_attachmentnamesource_t* field_e_ezsignsignature_attachmentnamesource = NULL;
  if (include_optional) {
    field_e_ezsignsignature_attachmentnamesource = field_e_ezsignsignature_attachmentnamesource_create(
    );
  } else {
    field_e_ezsignsignature_attachmentnamesource = field_e_ezsignsignature_attachmentnamesource_create(
    );
  }

  return field_e_ezsignsignature_attachmentnamesource;
}


#ifdef field_e_ezsignsignature_attachmentnamesource_MAIN

void test_field_e_ezsignsignature_attachmentnamesource(int include_optional) {
    field_e_ezsignsignature_attachmentnamesource_t* field_e_ezsignsignature_attachmentnamesource_1 = instantiate_field_e_ezsignsignature_attachmentnamesource(include_optional);

	cJSON* jsonfield_e_ezsignsignature_attachmentnamesource_1 = field_e_ezsignsignature_attachmentnamesource_convertToJSON(field_e_ezsignsignature_attachmentnamesource_1);
	printf("field_e_ezsignsignature_attachmentnamesource :\n%s\n", cJSON_Print(jsonfield_e_ezsignsignature_attachmentnamesource_1));
	field_e_ezsignsignature_attachmentnamesource_t* field_e_ezsignsignature_attachmentnamesource_2 = field_e_ezsignsignature_attachmentnamesource_parseFromJSON(jsonfield_e_ezsignsignature_attachmentnamesource_1);
	cJSON* jsonfield_e_ezsignsignature_attachmentnamesource_2 = field_e_ezsignsignature_attachmentnamesource_convertToJSON(field_e_ezsignsignature_attachmentnamesource_2);
	printf("repeating field_e_ezsignsignature_attachmentnamesource:\n%s\n", cJSON_Print(jsonfield_e_ezsignsignature_attachmentnamesource_2));
}

int main() {
  test_field_e_ezsignsignature_attachmentnamesource(1);
  test_field_e_ezsignsignature_attachmentnamesource(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsignsignature_attachmentnamesource_MAIN
#endif // field_e_ezsignsignature_attachmentnamesource_TEST
