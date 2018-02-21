#
# Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
# or more contributor license agreements. Licensed under the Elastic License;
# you may not use this file except in compliance with the Elastic License.
#

include $(CPP_SRC_HOME)/mk/rules.mk

ifndef DEFAULT_TEST_CMDS
DEFAULT_TEST_CMDS=./$(TARGET) $(TEST_ARGS)

ifdef TEST_CASE
DEFAULT_TEST_CMDS+= $(TEST_CASE)
endif

endif # ifndef DEFAULT_TEST_CMDS


ifdef CPP_CROSS_COMPILE
TEST_CMDS=@ echo 'WARNING!!!! CANNOT RUN UNIT TESTS WHEN CROSS COMPILING'
else
#if we haven't defined a specific test just run it
ifndef TEST_CMDS
TEST_CMDS=$(DEFAULT_TEST_CMDS)
endif
endif

ifndef PRE_TEST_CMDS
PRE_TEST_CMDS=
endif

ifndef POST_TEST_CMDS
POST_TEST_CMDS=
endif
