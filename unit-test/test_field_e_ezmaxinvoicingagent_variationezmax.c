#ifndef field_e_ezmaxinvoicingagent_variationezmax_TEST
#define field_e_ezmaxinvoicingagent_variationezmax_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezmaxinvoicingagent_variationezmax_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezmaxinvoicingagent_variationezmax.h"
field_e_ezmaxinvoicingagent_variationezmax_t* instantiate_field_e_ezmaxinvoicingagent_variationezmax(int include_optional);



field_e_ezmaxinvoicingagent_variationezmax_t* instantiate_field_e_ezmaxinvoicingagent_variationezmax(int include_optional) {
  field_e_ezmaxinvoicingagent_variationezmax_t* field_e_ezmaxinvoicingagent_variationezmax = NULL;
  if (include_optional) {
    field_e_ezmaxinvoicingagent_variationezmax = field_e_ezmaxinvoicingagent_variationezmax_create(
    );
  } else {
    field_e_ezmaxinvoicingagent_variationezmax = field_e_ezmaxinvoicingagent_variationezmax_create(
    );
  }

  return field_e_ezmaxinvoicingagent_variationezmax;
}


#ifdef field_e_ezmaxinvoicingagent_variationezmax_MAIN

void test_field_e_ezmaxinvoicingagent_variationezmax(int include_optional) {
    field_e_ezmaxinvoicingagent_variationezmax_t* field_e_ezmaxinvoicingagent_variationezmax_1 = instantiate_field_e_ezmaxinvoicingagent_variationezmax(include_optional);

	cJSON* jsonfield_e_ezmaxinvoicingagent_variationezmax_1 = field_e_ezmaxinvoicingagent_variationezmax_convertToJSON(field_e_ezmaxinvoicingagent_variationezmax_1);
	printf("field_e_ezmaxinvoicingagent_variationezmax :\n%s\n", cJSON_Print(jsonfield_e_ezmaxinvoicingagent_variationezmax_1));
	field_e_ezmaxinvoicingagent_variationezmax_t* field_e_ezmaxinvoicingagent_variationezmax_2 = field_e_ezmaxinvoicingagent_variationezmax_parseFromJSON(jsonfield_e_ezmaxinvoicingagent_variationezmax_1);
	cJSON* jsonfield_e_ezmaxinvoicingagent_variationezmax_2 = field_e_ezmaxinvoicingagent_variationezmax_convertToJSON(field_e_ezmaxinvoicingagent_variationezmax_2);
	printf("repeating field_e_ezmaxinvoicingagent_variationezmax:\n%s\n", cJSON_Print(jsonfield_e_ezmaxinvoicingagent_variationezmax_2));
}

int main() {
  test_field_e_ezmaxinvoicingagent_variationezmax(1);
  test_field_e_ezmaxinvoicingagent_variationezmax(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezmaxinvoicingagent_variationezmax_MAIN
#endif // field_e_ezmaxinvoicingagent_variationezmax_TEST
