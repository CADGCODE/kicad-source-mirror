if( KICAD_SCRIPTING_MODULES )

    # build target that runs the QA tests through scripting
    add_custom_target( qa
        COMMAND PYTHONPATH=${CMAKE_BINARY_DIR}/pcbnew${PYTHON_QA_PATH} ${PYTHON_EXECUTABLE} test.py

        COMMENT "running qa"
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        )

endif()

add_subdirectory( geometry )
add_subdirectory( pcb_test_window )
add_subdirectory( polygon_triangulation )
add_subdirectory( polygon_generator )