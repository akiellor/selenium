#!/bin/bash
unset GEM_PATH
unset GEM_HOME

java -jar third_party/jruby/jruby-complete.jar -S rake $*


