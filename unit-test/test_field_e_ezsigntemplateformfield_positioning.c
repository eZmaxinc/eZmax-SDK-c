#ifndef field_e_ezsigntemplateformfield_positioning_TEST
#define field_e_ezsigntemplateformfield_positioning_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_ezsigntemplateformfield_positioning_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_ezsigntemplateformfield_positioning.h"
field_e_ezsigntemplateformfield_positioning_t* instantiate_field_e_ezsigntemplateformfield_positioning(int include_optional);



field_e_ezsigntemplateformfield_positioning_t* instantiate_field_e_ezsigntemplateformfield_positioning(int include_optional) {
  field_e_ezsigntemplateformfield_positioning_t* field_e_ezsigntemplateformfield_positioning = NULL;
  if (include_optional) {
    field_e_ezsigntemplateformfield_positioning = field_e_ezsigntemplateformfield_positioning_create(
    );
  } else {
    field_e_ezsigntemplateformfield_positioning = field_e_ezsigntemplateformfield_positioning_create(
    );
  }

  return field_e_ezsigntemplateformfield_positioning;
}


#ifdef field_e_ezsigntemplateformfield_positioning_MAIN

void test_field_e_ezsigntemplateformfield_positioning(int include_optional) {
    field_e_ezsigntemplateformfield_positioning_t* field_e_ezsigntemplateformfield_positioning_1 = instantiate_field_e_ezsigntemplateformfield_positioning(include_optional);

	cJSON* jsonfield_e_ezsigntemplateformfield_positioning_1 = field_e_ezsigntemplateformfield_positioning_convertToJSON(field_e_ezsigntemplateformfield_positioning_1);
	printf("field_e_ezsigntemplateformfield_positioning :\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplateformfield_positioning_1));
	field_e_ezsigntemplateformfield_positioning_t* field_e_ezsigntemplateformfield_positioning_2 = field_e_ezsigntemplateformfield_positioning_parseFromJSON(jsonfield_e_ezsigntemplateformfield_positioning_1);
	cJSON* jsonfield_e_ezsigntemplateformfield_positioning_2 = field_e_ezsigntemplateformfield_positioning_convertToJSON(field_e_ezsigntemplateformfield_positioning_2);
	printf("repeating field_e_ezsigntemplateformfield_positioning:\n%s\n", cJSON_Print(jsonfield_e_ezsigntemplateformfield_positioning_2));
}

int main() {
  test_field_e_ezsigntemplateformfield_positioning(1);
  test_field_e_ezsigntemplateformfield_positioning(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_ezsigntemplateformfield_positioning_MAIN
#endif // field_e_ezsigntemplateformfield_positioning_TEST
