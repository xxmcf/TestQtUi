#-------------------------------------------------
#
# Project created by QtCreator 2020-04-03T14:23:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestQtUi
TEMPLATE = app

INCLUDEPATH += lib/Catch2/include

SOURCES += main.cpp\
        MainWindow.cpp \
    lib/Catch2/include/internal/benchmark/detail/catch_stats.cpp \
    lib/Catch2/include/internal/catch_approx.cpp \
    lib/Catch2/include/internal/catch_assertionhandler.cpp \
    lib/Catch2/include/internal/catch_assertionresult.cpp \
    lib/Catch2/include/internal/catch_capture_matchers.cpp \
    lib/Catch2/include/internal/catch_commandline.cpp \
    lib/Catch2/include/internal/catch_common.cpp \
    lib/Catch2/include/internal/catch_config.cpp \
    lib/Catch2/include/internal/catch_console_colour.cpp \
    lib/Catch2/include/internal/catch_context.cpp \
    lib/Catch2/include/internal/catch_debug_console.cpp \
    lib/Catch2/include/internal/catch_debugger.cpp \
    lib/Catch2/include/internal/catch_decomposer.cpp \
    lib/Catch2/include/internal/catch_enforce.cpp \
    lib/Catch2/include/internal/catch_enum_values_registry.cpp \
    lib/Catch2/include/internal/catch_errno_guard.cpp \
    lib/Catch2/include/internal/catch_exception_translator_registry.cpp \
    lib/Catch2/include/internal/catch_fatal_condition.cpp \
    lib/Catch2/include/internal/catch_generators.cpp \
    lib/Catch2/include/internal/catch_interfaces_capture.cpp \
    lib/Catch2/include/internal/catch_interfaces_config.cpp \
    lib/Catch2/include/internal/catch_interfaces_exception.cpp \
    lib/Catch2/include/internal/catch_interfaces_registry_hub.cpp \
    lib/Catch2/include/internal/catch_interfaces_reporter.cpp \
    lib/Catch2/include/internal/catch_interfaces_runner.cpp \
    lib/Catch2/include/internal/catch_interfaces_testcase.cpp \
    lib/Catch2/include/internal/catch_leak_detector.cpp \
    lib/Catch2/include/internal/catch_list.cpp \
    lib/Catch2/include/internal/catch_matchers.cpp \
    lib/Catch2/include/internal/catch_matchers_floating.cpp \
    lib/Catch2/include/internal/catch_matchers_generic.cpp \
    lib/Catch2/include/internal/catch_matchers_string.cpp \
    lib/Catch2/include/internal/catch_message.cpp \
    lib/Catch2/include/internal/catch_output_redirect.cpp \
    lib/Catch2/include/internal/catch_polyfills.cpp \
    lib/Catch2/include/internal/catch_random_number_generator.cpp \
    lib/Catch2/include/internal/catch_registry_hub.cpp \
    lib/Catch2/include/internal/catch_reporter_registry.cpp \
    lib/Catch2/include/internal/catch_result_type.cpp \
    lib/Catch2/include/internal/catch_run_context.cpp \
    lib/Catch2/include/internal/catch_section.cpp \
    lib/Catch2/include/internal/catch_section_info.cpp \
    lib/Catch2/include/internal/catch_session.cpp \
    lib/Catch2/include/internal/catch_singletons.cpp \
    lib/Catch2/include/internal/catch_startup_exception_registry.cpp \
    lib/Catch2/include/internal/catch_stream.cpp \
    lib/Catch2/include/internal/catch_string_manip.cpp \
    lib/Catch2/include/internal/catch_stringref.cpp \
    lib/Catch2/include/internal/catch_tag_alias.cpp \
    lib/Catch2/include/internal/catch_tag_alias_autoregistrar.cpp \
    lib/Catch2/include/internal/catch_tag_alias_registry.cpp \
    lib/Catch2/include/internal/catch_test_case_info.cpp \
    lib/Catch2/include/internal/catch_test_case_registry_impl.cpp \
    lib/Catch2/include/internal/catch_test_case_tracker.cpp \
    lib/Catch2/include/internal/catch_test_registry.cpp \
    lib/Catch2/include/internal/catch_test_spec.cpp \
    lib/Catch2/include/internal/catch_test_spec_parser.cpp \
    lib/Catch2/include/internal/catch_timer.cpp \
    lib/Catch2/include/internal/catch_tostring.cpp \
    lib/Catch2/include/internal/catch_totals.cpp \
    lib/Catch2/include/internal/catch_uncaught_exceptions.cpp \
    lib/Catch2/include/internal/catch_version.cpp \
    lib/Catch2/include/internal/catch_wildcard_pattern.cpp \
    lib/Catch2/include/internal/catch_xmlwriter.cpp \
    lib/Catch2/include/reporters/catch_reporter_bases.cpp \
    lib/Catch2/include/reporters/catch_reporter_compact.cpp \
    lib/Catch2/include/reporters/catch_reporter_console.cpp \
    lib/Catch2/include/reporters/catch_reporter_junit.cpp \
    lib/Catch2/include/reporters/catch_reporter_listening.cpp \
    lib/Catch2/include/reporters/catch_reporter_xml.cpp \
    CustomUi/MyPushButton.cpp \
    CustomUi/MyPopupDialog.cpp \
    CustomUi/BaseMoveDialog.cpp \
    CustomUi/MyMessagBox.cpp

HEADERS  += MainWindow.h \
    lib/Catch2/include/external/clara.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_analyse.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_benchmark_function.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_complete_invoke.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_estimate_clock.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_measure.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_repeat.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_run_for_at_least.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_stats.hpp \
    lib/Catch2/include/internal/benchmark/detail/catch_timing.hpp \
    lib/Catch2/include/internal/benchmark/catch_benchmark.hpp \
    lib/Catch2/include/internal/benchmark/catch_chronometer.hpp \
    lib/Catch2/include/internal/benchmark/catch_clock.hpp \
    lib/Catch2/include/internal/benchmark/catch_constructor.hpp \
    lib/Catch2/include/internal/benchmark/catch_environment.hpp \
    lib/Catch2/include/internal/benchmark/catch_estimate.hpp \
    lib/Catch2/include/internal/benchmark/catch_execution_plan.hpp \
    lib/Catch2/include/internal/benchmark/catch_optimizer.hpp \
    lib/Catch2/include/internal/benchmark/catch_outlier_classification.hpp \
    lib/Catch2/include/internal/benchmark/catch_sample_analysis.hpp \
    lib/Catch2/include/internal/catch_approx.h \
    lib/Catch2/include/internal/catch_assertionhandler.h \
    lib/Catch2/include/internal/catch_assertioninfo.h \
    lib/Catch2/include/internal/catch_assertionresult.h \
    lib/Catch2/include/internal/catch_capture.hpp \
    lib/Catch2/include/internal/catch_capture_matchers.h \
    lib/Catch2/include/internal/catch_clara.h \
    lib/Catch2/include/internal/catch_commandline.h \
    lib/Catch2/include/internal/catch_common.h \
    lib/Catch2/include/internal/catch_compiler_capabilities.h \
    lib/Catch2/include/internal/catch_config.hpp \
    lib/Catch2/include/internal/catch_console_colour.h \
    lib/Catch2/include/internal/catch_context.h \
    lib/Catch2/include/internal/catch_debug_console.h \
    lib/Catch2/include/internal/catch_debugger.h \
    lib/Catch2/include/internal/catch_decomposer.h \
    lib/Catch2/include/internal/catch_default_main.hpp \
    lib/Catch2/include/internal/catch_enforce.h \
    lib/Catch2/include/internal/catch_enum_values_registry.h \
    lib/Catch2/include/internal/catch_errno_guard.h \
    lib/Catch2/include/internal/catch_exception_translator_registry.h \
    lib/Catch2/include/internal/catch_external_interfaces.h \
    lib/Catch2/include/internal/catch_fatal_condition.h \
    lib/Catch2/include/internal/catch_generators.hpp \
    lib/Catch2/include/internal/catch_generators_generic.hpp \
    lib/Catch2/include/internal/catch_generators_specific.hpp \
    lib/Catch2/include/internal/catch_impl.hpp \
    lib/Catch2/include/internal/catch_interfaces_capture.h \
    lib/Catch2/include/internal/catch_interfaces_config.h \
    lib/Catch2/include/internal/catch_interfaces_enum_values_registry.h \
    lib/Catch2/include/internal/catch_interfaces_exception.h \
    lib/Catch2/include/internal/catch_interfaces_generatortracker.h \
    lib/Catch2/include/internal/catch_interfaces_registry_hub.h \
    lib/Catch2/include/internal/catch_interfaces_reporter.h \
    lib/Catch2/include/internal/catch_interfaces_runner.h \
    lib/Catch2/include/internal/catch_interfaces_tag_alias_registry.h \
    lib/Catch2/include/internal/catch_interfaces_testcase.h \
    lib/Catch2/include/internal/catch_leak_detector.h \
    lib/Catch2/include/internal/catch_list.h \
    lib/Catch2/include/internal/catch_matchers.h \
    lib/Catch2/include/internal/catch_matchers_floating.h \
    lib/Catch2/include/internal/catch_matchers_generic.hpp \
    lib/Catch2/include/internal/catch_matchers_string.h \
    lib/Catch2/include/internal/catch_matchers_vector.h \
    lib/Catch2/include/internal/catch_message.h \
    lib/Catch2/include/internal/catch_meta.hpp \
    lib/Catch2/include/internal/catch_objc.hpp \
    lib/Catch2/include/internal/catch_objc_arc.hpp \
    lib/Catch2/include/internal/catch_option.hpp \
    lib/Catch2/include/internal/catch_output_redirect.h \
    lib/Catch2/include/internal/catch_platform.h \
    lib/Catch2/include/internal/catch_polyfills.hpp \
    lib/Catch2/include/internal/catch_preprocessor.hpp \
    lib/Catch2/include/internal/catch_random_number_generator.h \
    lib/Catch2/include/internal/catch_reenable_warnings.h \
    lib/Catch2/include/internal/catch_reporter_registrars.hpp \
    lib/Catch2/include/internal/catch_reporter_registry.h \
    lib/Catch2/include/internal/catch_result_type.h \
    lib/Catch2/include/internal/catch_run_context.h \
    lib/Catch2/include/internal/catch_section.h \
    lib/Catch2/include/internal/catch_section_info.h \
    lib/Catch2/include/internal/catch_session.h \
    lib/Catch2/include/internal/catch_singletons.hpp \
    lib/Catch2/include/internal/catch_startup_exception_registry.h \
    lib/Catch2/include/internal/catch_stream.h \
    lib/Catch2/include/internal/catch_string_manip.h \
    lib/Catch2/include/internal/catch_stringref.h \
    lib/Catch2/include/internal/catch_suppress_warnings.h \
    lib/Catch2/include/internal/catch_tag_alias.h \
    lib/Catch2/include/internal/catch_tag_alias_autoregistrar.h \
    lib/Catch2/include/internal/catch_tag_alias_registry.h \
    lib/Catch2/include/internal/catch_test_case_info.h \
    lib/Catch2/include/internal/catch_test_case_registry_impl.h \
    lib/Catch2/include/internal/catch_test_case_tracker.h \
    lib/Catch2/include/internal/catch_test_registry.h \
    lib/Catch2/include/internal/catch_test_spec.h \
    lib/Catch2/include/internal/catch_test_spec_parser.h \
    lib/Catch2/include/internal/catch_text.h \
    lib/Catch2/include/internal/catch_timer.h \
    lib/Catch2/include/internal/catch_to_string.hpp \
    lib/Catch2/include/internal/catch_tostring.h \
    lib/Catch2/include/internal/catch_totals.h \
    lib/Catch2/include/internal/catch_type_traits.hpp \
    lib/Catch2/include/internal/catch_uncaught_exceptions.h \
    lib/Catch2/include/internal/catch_user_interfaces.h \
    lib/Catch2/include/internal/catch_version.h \
    lib/Catch2/include/internal/catch_wildcard_pattern.h \
    lib/Catch2/include/internal/catch_windows_h_proxy.h \
    lib/Catch2/include/internal/catch_xmlwriter.h \
    lib/Catch2/include/reporters/catch_reporter_automake.hpp \
    lib/Catch2/include/reporters/catch_reporter_bases.hpp \
    lib/Catch2/include/reporters/catch_reporter_compact.h \
    lib/Catch2/include/reporters/catch_reporter_console.h \
    lib/Catch2/include/reporters/catch_reporter_junit.h \
    lib/Catch2/include/reporters/catch_reporter_listening.h \
    lib/Catch2/include/reporters/catch_reporter_tap.hpp \
    lib/Catch2/include/reporters/catch_reporter_teamcity.hpp \
    lib/Catch2/include/reporters/catch_reporter_xml.h \
    lib/Catch2/include/catch.hpp \
    lib/Catch2/include/catch_with_main.hpp \
    CustomUi/MyPushButton.h \
    CustomUi/MyPopupDialog.h \
    CustomUi/BaseMoveDialog.h \
    CustomUi/MyMessagBox.h

FORMS    += MainWindow.ui

RESOURCES +=

TRANSLATIONS = \
    $$PWD/TestQtUi_en.ts \
    $$PWD/TestQtUi_zh.ts
