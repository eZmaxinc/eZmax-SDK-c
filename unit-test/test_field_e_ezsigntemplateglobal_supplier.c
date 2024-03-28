#ifndef field_e_ezsigntemplateglobal_supplier_TEST
#define field_e_ezsigntemplateglobal_supplier_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplateglobal_supplier_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplateglobal_supplier.h"
field_e_ezsigntemplateglobal_supplier_t* instantiate_field_e_ezsigntemplateglobal_supplier(int include_optional);



field_e_ezsigntemplateglobal_supplier_t* instantiate_field_e_ezsigntemplateglobal_supplier(int include_optional) {
  field_e_ezsigntemplateglobal_supplier_t* field_e_ezsigntemplateglobal_supplier = NULL;
  if (include_optional) {
    field_e_ezsigntemplateglobal_supplier = field_e_ezsigntemplateglobal_supplier_create(
    );
  } else {
    field_e_ezsigntemplateglobal_supplier = field_e_ezsigntemplateglobal_supplier_create(
    );
  }

  return field_e_ezsigntemplateglobal_supplier;
}


#ifdef field_e_ezsigntemplateglobal_supplier_MAIN

void test_field_e_ezsigntemplateglobal_supplier(int include_optional) {
    field_e_ezsigntemplateglobal_supplier_t* field_e_ezsigntemplateglobal_supplier_1 = instantiate_field_e_ezsigntemplateglobal_supplier(include_optional);

	cJSON* jsonfield_e_ezsigntemplateglobal_supplier_1 = field_e_ezsigntemplateglobal_supplier_convertToJSON(field_e_ezsigntemplateglobal_supplier_1);
	printf("field_e_ezsigntemplateglobal_supplier :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplateglobal_supplier_1));
	field_e_ezsigntemplateglobal_supplier_t* field_e_ezsigntemplateglobal_supplier_2 = field_e_ezsigntemplateglobal_supplier_parseFromJSON(jsonfield_e_ezsigntemplateglobal_supplier_1);
	cJSON* jsonfield_e_ezsigntemplateglobal_supplier_2 = field_e_ezsigntemplateglobal_supplier_convertToJSON(field_e_ezsigntemplateglobal_supplier_2);
	printf("repeating field_e_ezsigntemplateglobal_supplier:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplateglobal_supplier_2));
}

int main() {
  test_field_e_ezsigntemplateglobal_supplier(1);
  test_field_e_ezsigntemplateglobal_supplier(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplateglobal_supplier_MAIN
#endif // field_e_ezsigntemplateglobal_supplier_TEST
