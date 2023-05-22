#ifndef field_e_sessionhistory_endby_TEST
#define field_e_sessionhistory_endby_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define field_e_sessionhistory_endby_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/field_e_sessionhistory_endby.h"
field_e_sessionhistory_endby_t* instantiate_field_e_sessionhistory_endby(int include_optional);



field_e_sessionhistory_endby_t* instantiate_field_e_sessionhistory_endby(int include_optional) {
  field_e_sessionhistory_endby_t* field_e_sessionhistory_endby = NULL;
  if (include_optional) {
    field_e_sessionhistory_endby = field_e_sessionhistory_endby_create(
    );
  } else {
    field_e_sessionhistory_endby = field_e_sessionhistory_endby_create(
    );
  }

  return field_e_sessionhistory_endby;
}


#ifdef field_e_sessionhistory_endby_MAIN

void test_field_e_sessionhistory_endby(int include_optional) {
    field_e_sessionhistory_endby_t* field_e_sessionhistory_endby_1 = instantiate_field_e_sessionhistory_endby(include_optional);

	cJSON* jsonfield_e_sessionhistory_endby_1 = field_e_sessionhistory_endby_convertToJSON(field_e_sessionhistory_endby_1);
	printf("field_e_sessionhistory_endby :\n%s\n", cJSON_Print(jsonfield_e_sessionhistory_endby_1));
	field_e_sessionhistory_endby_t* field_e_sessionhistory_endby_2 = field_e_sessionhistory_endby_parseFromJSON(jsonfield_e_sessionhistory_endby_1);
	cJSON* jsonfield_e_sessionhistory_endby_2 = field_e_sessionhistory_endby_convertToJSON(field_e_sessionhistory_endby_2);
	printf("repeating field_e_sessionhistory_endby:\n%s\n", cJSON_Print(jsonfield_e_sessionhistory_endby_2));
}

int main() {
  test_field_e_sessionhistory_endby(1);
  test_field_e_sessionhistory_endby(0);

  printf("Hello world \n");
  return 0;
}

#endif // field_e_sessionhistory_endby_MAIN
#endif // field_e_sessionhistory_endby_TEST
