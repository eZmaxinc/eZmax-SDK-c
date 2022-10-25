#ifndef field_e_ezmaxinvoicinguser_variationezsign_TEST
#define field_e_ezmaxinvoicinguser_variationezsign_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezmaxinvoicinguser_variationezsign_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezmaxinvoicinguser_variationezsign.h"
field_e_ezmaxinvoicinguser_variationezsign_t* instantiate_field_e_ezmaxinvoicinguser_variationezsign(int include_optional);



field_e_ezmaxinvoicinguser_variationezsign_t* instantiate_field_e_ezmaxinvoicinguser_variationezsign(int include_optional) {
  field_e_ezmaxinvoicinguser_variationezsign_t* field_e_ezmaxinvoicinguser_variationezsign = NULL;
  if (include_optional) {
    field_e_ezmaxinvoicinguser_variationezsign = field_e_ezmaxinvoicinguser_variationezsign_create(
    );
  } else {
    field_e_ezmaxinvoicinguser_variationezsign = field_e_ezmaxinvoicinguser_variationezsign_create(
    );
  }

  return field_e_ezmaxinvoicinguser_variationezsign;
}


#ifdef field_e_ezmaxinvoicinguser_variationezsign_MAIN

void test_field_e_ezmaxinvoicinguser_variationezsign(int include_optional) {
    field_e_ezmaxinvoicinguser_variationezsign_t* field_e_ezmaxinvoicinguser_variationezsign_1 = instantiate_field_e_ezmaxinvoicinguser_variationezsign(include_optional);

	cJSON* jsonfield_e_ezmaxinvoicinguser_variationezsign_1 = field_e_ezmaxinvoicinguser_variationezsign_convertToJSON(field_e_ezmaxinvoicinguser_variationezsign_1);
	printf("field_e_ezmaxinvoicinguser_variationezsign :\n%s\n", cJSON_Print(jsonfield_e_ezmaxinvoicinguser_variationezsign_1));
	field_e_ezmaxinvoicinguser_variationezsign_t* field_e_ezmaxinvoicinguser_variationezsign_2 = field_e_ezmaxinvoicinguser_variationezsign_parseFromJSON(jsonfield_e_ezmaxinvoicinguser_variationezsign_1);
	cJSON* jsonfield_e_ezmaxinvoicinguser_variationezsign_2 = field_e_ezmaxinvoicinguser_variationezsign_convertToJSON(field_e_ezmaxinvoicinguser_variationezsign_2);
	printf("repeating field_e_ezmaxinvoicinguser_variationezsign:\n%s\n", cJSON_Print(jsonfield_e_ezmaxinvoicinguser_variationezsign_2));
}

int main() {
  test_field_e_ezmaxinvoicinguser_variationezsign(1);
  test_field_e_ezmaxinvoicinguser_variationezsign(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezmaxinvoicinguser_variationezsign_MAIN
#endif // field_e_ezmaxinvoicinguser_variationezsign_TEST
