#ifndef field_e_branding_alignlogo_TEST
#define field_e_branding_alignlogo_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_branding_alignlogo_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_branding_alignlogo.h"
field_e_branding_alignlogo_t* instantiate_field_e_branding_alignlogo(int include_optional);



field_e_branding_alignlogo_t* instantiate_field_e_branding_alignlogo(int include_optional) {
  field_e_branding_alignlogo_t* field_e_branding_alignlogo = NULL;
  if (include_optional) {
    field_e_branding_alignlogo = field_e_branding_alignlogo_create(
    );
  } else {
    field_e_branding_alignlogo = field_e_branding_alignlogo_create(
    );
  }

  return field_e_branding_alignlogo;
}


#ifdef field_e_branding_alignlogo_MAIN

void test_field_e_branding_alignlogo(int include_optional) {
    field_e_branding_alignlogo_t* field_e_branding_alignlogo_1 = instantiate_field_e_branding_alignlogo(include_optional);

	cJSON* jsonfield_e_branding_alignlogo_1 = field_e_branding_alignlogo_convertToJSON(field_e_branding_alignlogo_1);
	printf("field_e_branding_alignlogo :\n%s\n", cJSON_Print(jsonfield_e_branding_alignlogo_1));
	field_e_branding_alignlogo_t* field_e_branding_alignlogo_2 = field_e_branding_alignlogo_parseFromJSON(jsonfield_e_branding_alignlogo_1);
	cJSON* jsonfield_e_branding_alignlogo_2 = field_e_branding_alignlogo_convertToJSON(field_e_branding_alignlogo_2);
	printf("repeating field_e_branding_alignlogo:\n%s\n", cJSON_Print(jsonfield_e_branding_alignlogo_2));
}

int main() {
  test_field_e_branding_alignlogo(1);
  test_field_e_branding_alignlogo(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_branding_alignlogo_MAIN
#endif // field_e_branding_alignlogo_TEST
