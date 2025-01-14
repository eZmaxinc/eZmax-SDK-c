#ifndef field_e_ezsigntemplatepackagesigner_mapping_TEST
#define field_e_ezsigntemplatepackagesigner_mapping_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplatepackagesigner_mapping_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplatepackagesigner_mapping.h"
field_e_ezsigntemplatepackagesigner_mapping_t* instantiate_field_e_ezsigntemplatepackagesigner_mapping(int include_optional);



field_e_ezsigntemplatepackagesigner_mapping_t* instantiate_field_e_ezsigntemplatepackagesigner_mapping(int include_optional) {
  field_e_ezsigntemplatepackagesigner_mapping_t* field_e_ezsigntemplatepackagesigner_mapping = NULL;
  if (include_optional) {
    field_e_ezsigntemplatepackagesigner_mapping = field_e_ezsigntemplatepackagesigner_mapping_create(
    );
  } else {
    field_e_ezsigntemplatepackagesigner_mapping = field_e_ezsigntemplatepackagesigner_mapping_create(
    );
  }

  return field_e_ezsigntemplatepackagesigner_mapping;
}


#ifdef field_e_ezsigntemplatepackagesigner_mapping_MAIN

void test_field_e_ezsigntemplatepackagesigner_mapping(int include_optional) {
    field_e_ezsigntemplatepackagesigner_mapping_t* field_e_ezsigntemplatepackagesigner_mapping_1 = instantiate_field_e_ezsigntemplatepackagesigner_mapping(include_optional);

	cJSON* jsonfield_e_ezsigntemplatepackagesigner_mapping_1 = field_e_ezsigntemplatepackagesigner_mapping_convertToJSON(field_e_ezsigntemplatepackagesigner_mapping_1);
	printf("field_e_ezsigntemplatepackagesigner_mapping :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatepackagesigner_mapping_1));
	field_e_ezsigntemplatepackagesigner_mapping_t* field_e_ezsigntemplatepackagesigner_mapping_2 = field_e_ezsigntemplatepackagesigner_mapping_parseFromJSON(jsonfield_e_ezsigntemplatepackagesigner_mapping_1);
	cJSON* jsonfield_e_ezsigntemplatepackagesigner_mapping_2 = field_e_ezsigntemplatepackagesigner_mapping_convertToJSON(field_e_ezsigntemplatepackagesigner_mapping_2);
	printf("repeating field_e_ezsigntemplatepackagesigner_mapping:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplatepackagesigner_mapping_2));
}

int main() {
  test_field_e_ezsigntemplatepackagesigner_mapping(1);
  test_field_e_ezsigntemplatepackagesigner_mapping(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplatepackagesigner_mapping_MAIN
#endif // field_e_ezsigntemplatepackagesigner_mapping_TEST
