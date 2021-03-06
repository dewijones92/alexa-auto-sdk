/*
 * Copyright 2018-2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#ifndef AACE_TEST_ALEXA_MOCK_TEMPLATE_RUNTIME_H
#define AACE_TEST_ALEXA_MOCK_TEMPLATE_RUNTIME_H

#include <AACE/Alexa/TemplateRuntime.h>
#include <gtest/gtest.h>

namespace aace {
namespace test {
namespace alexa {

class MockTemplateRuntime : public aace::alexa::TemplateRuntime {
public:
    MOCK_METHOD1(renderTemplate,void(const std::string& payload));
    MOCK_METHOD0(clearTemplate,void());
    MOCK_METHOD1(renderPlayerInfo,void(const std::string& payload));
    MOCK_METHOD0(clearPlayerInfo,void());
};

} // aace::test::alexa
} // aace::test
} // aace

#endif // AACE_TEST_ALEXA_MOCK_TEMPLATE_RUNTIME_H
