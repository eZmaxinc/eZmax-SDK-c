#ifndef field_e_ezmaxinvoicing_paymenttype_TEST
#define field_e_ezmaxinvoicing_paymenttype_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezmaxinvoicing_paymenttype_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezmaxinvoicing_paymenttype.h"
field_e_ezmaxinvoicing_paymenttype_t* instantiate_field_e_ezmaxinvoicing_paymenttype(int include_optional);



field_e_ezmaxinvoicing_paymenttype_t* instantiate_field_e_ezmaxinvoicing_paymenttype(int include_optional) {
  field_e_ezmaxinvoicing_paymenttype_t* field_e_ezmaxinvoicing_paymenttype = NULL;
  if (include_optional) {
    field_e_ezmaxinvoicing_paymenttype = field_e_ezmaxinvoicing_paymenttype_create(
    );
  } else {
    field_e_ezmaxinvoicing_paymenttype = field_e_ezmaxinvoicing_paymenttype_create(
    );
  }

  return field_e_ezmaxinvoicing_paymenttype;
}


#ifdef field_e_ezmaxinvoicing_paymenttype_MAIN

void test_field_e_ezmaxinvoicing_paymenttype(int include_optional) {
    field_e_ezmaxinvoicing_paymenttype_t* field_e_ezmaxinvoicing_paymenttype_1 = instantiate_field_e_ezmaxinvoicing_paymenttype(include_optional);

	cJSON* jsonfield_e_ezmaxinvoicing_paymenttype_1 = field_e_ezmaxinvoicing_paymenttype_convertToJSON(field_e_ezmaxinvoicing_paymenttype_1);
	printf("field_e_ezmaxinvoicing_paymenttype :\n%s\n", cJSON_Print(jsonfield_e_ezmaxinvoicing_paymenttype_1));
	field_e_ezmaxinvoicing_paymenttype_t* field_e_ezmaxinvoicing_paymenttype_2 = field_e_ezmaxinvoicing_paymenttype_parseFromJSON(jsonfield_e_ezmaxinvoicing_paymenttype_1);
	cJSON* jsonfield_e_ezmaxinvoicing_paymenttype_2 = field_e_ezmaxinvoicing_paymenttype_convertToJSON(field_e_ezmaxinvoicing_paymenttype_2);
	printf("repeating field_e_ezmaxinvoicing_paymenttype:\n%s\n", cJSON_Print(jsonfield_e_ezmaxinvoicing_paymenttype_2));
}

int main() {
  test_field_e_ezmaxinvoicing_paymenttype(1);
  test_field_e_ezmaxinvoicing_paymenttype(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezmaxinvoicing_paymenttype_MAIN
#endif // field_e_ezmaxinvoicing_paymenttype_TEST
