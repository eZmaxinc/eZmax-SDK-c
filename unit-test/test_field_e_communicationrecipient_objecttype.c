#ifndef field_e_communicationrecipient_objecttype_TEST
#define field_e_communicationrecipient_objecttype_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_communicationrecipient_objecttype_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_communicationrecipient_objecttype.h"
field_e_communicationrecipient_objecttype_t* instantiate_field_e_communicationrecipient_objecttype(int include_optional);



field_e_communicationrecipient_objecttype_t* instantiate_field_e_communicationrecipient_objecttype(int include_optional) {
  field_e_communicationrecipient_objecttype_t* field_e_communicationrecipient_objecttype = NULL;
  if (include_optional) {
    field_e_communicationrecipient_objecttype = field_e_communicationrecipient_objecttype_create(
    );
  } else {
    field_e_communicationrecipient_objecttype = field_e_communicationrecipient_objecttype_create(
    );
  }

  return field_e_communicationrecipient_objecttype;
}


#ifdef field_e_communicationrecipient_objecttype_MAIN

void test_field_e_communicationrecipient_objecttype(int include_optional) {
    field_e_communicationrecipient_objecttype_t* field_e_communicationrecipient_objecttype_1 = instantiate_field_e_communicationrecipient_objecttype(include_optional);

	cJSON* jsonfield_e_communicationrecipient_objecttype_1 = field_e_communicationrecipient_objecttype_convertToJSON(field_e_communicationrecipient_objecttype_1);
	printf("field_e_communicationrecipient_objecttype :\n%s\n", cJSON_Print(jsonfield_e_communicationrecipient_objecttype_1));
	field_e_communicationrecipient_objecttype_t* field_e_communicationrecipient_objecttype_2 = field_e_communicationrecipient_objecttype_parseFromJSON(jsonfield_e_communicationrecipient_objecttype_1);
	cJSON* jsonfield_e_communicationrecipient_objecttype_2 = field_e_communicationrecipient_objecttype_convertToJSON(field_e_communicationrecipient_objecttype_2);
	printf("repeating field_e_communicationrecipient_objecttype:\n%s\n", cJSON_Print(jsonfield_e_communicationrecipient_objecttype_2));
}

int main() {
  test_field_e_communicationrecipient_objecttype(1);
  test_field_e_communicationrecipient_objecttype(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_communicationrecipient_objecttype_MAIN
#endif // field_e_communicationrecipient_objecttype_TEST
