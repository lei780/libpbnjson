// @@@LICENSE
//
//      Copyright (c) 2009-2013 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// LICENSE@@@

#ifndef TESTSAX_H_
#define TESTSAX_H_

#include <QTest>

namespace pjson {

namespace testcxx {

class TestSAX : public QObject
{
	Q_OBJECT

public:
	TestSAX();
	virtual ~TestSAX();

private slots:
	void testGenerator_data();
	void testGenerator();
	void testParser_data();
	void testParser();
};

}

}

#endif /* TESTSAX_H_ */
