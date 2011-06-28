require 'yaml'

out = ['test_java', 'test_rb', 'test_javascript'].map do |task|
  [task, {'run' => "./go #{task}", 'needs' => [], 'results' => []}]
end

y Hash[out]

