# Task 3

For broadcasting sensor data, the best solution would be to create a publisher to publish sensor messages on some dedicated topic.
This allows us to subscrobe to this topic from multiple nodes, so many parts of the system can receive the sensor data.
If this is some one-of-a-type sensor, we could create a special message type dedicated just for communication with this one sensor.

As for sharing long computational resource, in my opinion the most suitable solution would be to create an action.
It allows us to call itself and then, as it progresses, we can receive feedback of what is going on.
It is most often used to perform long lasting calls like telling robot where to go.
