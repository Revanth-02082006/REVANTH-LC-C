int findPoisonedDuration(int *timeSeries, int timeSeriesSize, int duration)
{
  int time = duration;

  for (int i = 1; i < timeSeriesSize; i++)
  {
    int dif = timeSeries[i] - timeSeries[i - 1];
    if (dif < duration)
      time -= duration - dif;
    time += duration;
  }

  return time;
}
