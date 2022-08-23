#ifndef field_e_branding_logo_TEST
#define field_e_branding_logo_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_branding_logo_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_branding_logo.h"
field_e_branding_logo_t* instantiate_field_e_branding_logo(int include_optional);



field_e_branding_logo_t* instantiate_field_e_branding_logo(int include_optional) {
  field_e_branding_logo_t* field_e_branding_logo = NULL;
  if (include_optional) {
    field_e_branding_logo = field_e_branding_logo_create(
    );
  } else {
    field_e_branding_logo = field_e_branding_logo_create(
    );
  }

  return field_e_branding_logo;
}


#ifdef field_e_branding_logo_MAIN

void test_field_e_branding_logo(int include_optional) {
    field_e_branding_logo_t* field_e_branding_logo_1 = instantiate_field_e_branding_logo(include_optional);

	cJSON* jsonfield_e_branding_logo_1 = field_e_branding_logo_convertToJSON(field_e_branding_logo_1);
	printf("field_e_branding_logo :\n%s\n", cJSON_Print(jsonfield_e_branding_logo_1));
	field_e_branding_logo_t* field_e_branding_logo_2 = field_e_branding_logo_parseFromJSON(jsonfield_e_branding_logo_1);
	cJSON* jsonfield_e_branding_logo_2 = field_e_branding_logo_convertToJSON(field_e_branding_logo_2);
	printf("repeating field_e_branding_logo:\n%s\n", cJSON_Print(jsonfield_e_branding_logo_2));
}

int main() {
  test_field_e_branding_logo(1);
  test_field_e_branding_logo(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_branding_logo_MAIN
#endif // field_e_branding_logo_TEST
