#
# Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
# or more contributor license agreements. Licensed under the Elastic License;
# you may not use this file except in compliance with the Elastic License.
#
include $(CPP_SRC_HOME)/mk/defines.mk

TARGET=ml_test$(EXE_EXT)

USE_BOOST=1
USE_BOOST_FILESYSTEM_LIBS=1
USE_BOOST_TEST_LIBS=1
USE_RAPIDJSON=1
USE_EIGEN=1

LIBS:=$(LIB_ML_MATHS)

all: build

SRCS=\
	Main.cc \
	CAdaptiveBucketingTest.cc \
	CAgglomerativeClustererTest.cc \
	CAssignmentTest.cc \
	CBasicStatisticsTest.cc \
	CBayesianOptimisationTest.cc \
	CBjkstUniqueValuesTest.cc \
	CBoostedTreeLeafNodeStatisticsTest.cc \
	CBoostedTreeLossTest.cc \
	CBoostedTreeTest.cc \
	CBootstrapClustererTest.cc \
	CBoundingBoxTest.cc \
	CCalendarComponentAdaptiveBucketingTest.cc \
	CCalendarCyclicTestTest.cc \
	CCalendarFeatureTest.cc \
	CCategoricalToolsTest.cc \
	CChecksumTest.cc \
	CClustererTest.cc \
	CCountMinSketchTest.cc \
	CDataFrameCategoryEncoderTest.cc \
	CDataFrameUtilsTest.cc \
	CDecayRateControllerTest.cc \
	CEntropySketchTest.cc \
	CEqualWithToleranceTest.cc \
	CExpandingWindowTest.cc \
	CForecastTest.cc \
	CGammaRateConjugateTest.cc \
	CInformationCriteriaTest.cc \
	CIntegerToolsTest.cc \
	CIntegrationTest.cc \
	CKdTreeTest.cc \
	CKMeansTest.cc \
	CKMeansOnlineTest.cc \
	CKMostCorrelatedTest.cc \
	CLassoLogisticRegressionTest.cc \
	CLbfgsTest.cc \
	CLeastSquaresOnlineRegressionTest.cc \
	CLinearAlgebraTest.cc \
	CLogNormalMeanPrecConjugateTest.cc \
	CLogTDistributionTest.cc \
	CMathsFuncsTest.cc \
	CMathsMemoryTest.cc \
	CMicTest.cc \
	CMixtureDistributionTest.cc \
	CModelTest.cc \
	CMultimodalPriorTest.cc \
	CMultinomialConjugateTest.cc \
	CMultivariateConstantPriorTest.cc \
	CMultivariateMultimodalPriorTest.cc \
	CMultivariateNormalConjugateTest.cc \
	CMultivariateOneOfNPriorTest.cc \
	CNaiveBayesTest.cc \
	CNaturalBreaksClassifierTest.cc \
	CNormalMeanPrecConjugateTest.cc \
	COneOfNPriorTest.cc \
	COrderingsTest.cc \
	COrdinalTest.cc \
	COrthogonaliserTest.cc \
	COutliersTest.cc \
	CPoissonMeanConjugateTest.cc \
	CPriorTest.cc \
	CPRNGTest.cc \
	CProbabilityAggregatorsTest.cc \
	CProbabilityCalibratorTest.cc \
	CQDigestTest.cc \
	CQuantileSketchTest.cc \
	CRadialBasisFunctionTest.cc \
	CRandomProjectionClustererTest.cc \
	CSamplingTest.cc \
	CSeasonalComponentTest.cc \
	CSeasonalComponentAdaptiveBucketingTest.cc \
	CSeasonalTimeTest.cc \
	CSetToolsTest.cc \
	CSignalTest.cc \
	CSolversTest.cc \
	CSplineTest.cc \
	CStatisticalTestsTest.cc \
	CTimeSeriesDecompositionTest.cc \
	CTimeSeriesModelTest.cc \
	CTimeSeriesMultibucketFeaturesTest.cc \
	CTimeSeriesSegmentationTest.cc \
	CTimeSeriesTestForChangeTest.cc \
	CTimeSeriesTestForSeasonalityTest.cc \
	CToolsTest.cc \
	CTreeShapFeatureImportanceTest.cc \
	CTrendComponentTest.cc \
	CXMeansOnlineTest.cc \
	CXMeansOnline1dTest.cc \
	CXMeansTest.cc \
	TestUtils.cc \

include $(CPP_SRC_HOME)/mk/stdboosttest.mk
