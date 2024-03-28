#ifndef field_e_branding_logointerface_TEST
#define field_e_branding_logointerface_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_branding_logointerface_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_branding_logointerface.h"
field_e_branding_logointerface_t* instantiate_field_e_branding_logointerface(int include_optional);



field_e_branding_logointerface_t* instantiate_field_e_branding_logointerface(int include_optional) {
  field_e_branding_logointerface_t* field_e_branding_logointerface = NULL;
  if (include_optional) {
    field_e_branding_logointerface = field_e_branding_logointerface_create(
    );
  } else {
    field_e_branding_logointerface = field_e_branding_logointerface_create(
    );
  }

  return field_e_branding_logointerface;
}


#ifdef field_e_branding_logointerface_MAIN

void test_field_e_branding_logointerface(int include_optional) {
    field_e_branding_logointerface_t* field_e_branding_logointerface_1 = instantiate_field_e_branding_logointerface(include_optional);

	cJSON* jsonfield_e_branding_logointerface_1 = field_e_branding_logointerface_convertToJSON(field_e_branding_logointerface_1);
	printf("field_e_branding_logointerface :\n%s\n", cJSON_Print(jsonfield_e_branding_logointerface_1));
	field_e_branding_logointerface_t* field_e_branding_logointerface_2 = field_e_branding_logointerface_parseFromJSON(jsonfield_e_branding_logointerface_1);
	cJSON* jsonfield_e_branding_logointerface_2 = field_e_branding_logointerface_convertToJSON(field_e_branding_logointerface_2);
	printf("repeating field_e_branding_logointerface:\n%s\n", cJSON_Print(jsonfield_e_branding_logointerface_2));
}

int main() {
  test_field_e_branding_logointerface(1);
  test_field_e_branding_logointerface(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_branding_logointerface_MAIN
#endif // field_e_branding_logointerface_TEST
