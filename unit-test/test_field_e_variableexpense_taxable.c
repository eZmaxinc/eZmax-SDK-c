#ifndef field_e_variableexpense_taxable_TEST
#define field_e_variableexpense_taxable_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_variableexpense_taxable_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_variableexpense_taxable.h"
field_e_variableexpense_taxable_t* instantiate_field_e_variableexpense_taxable(int include_optional);



field_e_variableexpense_taxable_t* instantiate_field_e_variableexpense_taxable(int include_optional) {
  field_e_variableexpense_taxable_t* field_e_variableexpense_taxable = NULL;
  if (include_optional) {
    field_e_variableexpense_taxable = field_e_variableexpense_taxable_create(
    );
  } else {
    field_e_variableexpense_taxable = field_e_variableexpense_taxable_create(
    );
  }

  return field_e_variableexpense_taxable;
}


#ifdef field_e_variableexpense_taxable_MAIN

void test_field_e_variableexpense_taxable(int include_optional) {
    field_e_variableexpense_taxable_t* field_e_variableexpense_taxable_1 = instantiate_field_e_variableexpense_taxable(include_optional);

	cJSON* jsonfield_e_variableexpense_taxable_1 = field_e_variableexpense_taxable_convertToJSON(field_e_variableexpense_taxable_1);
	printf("field_e_variableexpense_taxable :\n%s\n", cJSON_Print(jsonfield_e_variableexpense_taxable_1));
	field_e_variableexpense_taxable_t* field_e_variableexpense_taxable_2 = field_e_variableexpense_taxable_parseFromJSON(jsonfield_e_variableexpense_taxable_1);
	cJSON* jsonfield_e_variableexpense_taxable_2 = field_e_variableexpense_taxable_convertToJSON(field_e_variableexpense_taxable_2);
	printf("repeating field_e_variableexpense_taxable:\n%s\n", cJSON_Print(jsonfield_e_variableexpense_taxable_2));
}

int main() {
  test_field_e_variableexpense_taxable(1);
  test_field_e_variableexpense_taxable(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_variableexpense_taxable_MAIN
#endif // field_e_variableexpense_taxable_TEST
