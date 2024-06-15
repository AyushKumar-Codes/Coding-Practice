import { Component, OnInit } from '@angular/core';
import {
  ApexAxisChartSeries,
  ApexChart,
  ApexXAxis,
  ApexTitleSubtitle,
  ApexDataLabels,
  ApexYAxis,
  ApexGrid,
  ApexTooltip,
  ApexStroke,
  ApexMarkers,
  ApexFill,
  ApexResponsive,
  ApexPlotOptions,
  ApexLegend,
  ApexNonAxisChartSeries
} from "ng-apexcharts";

export type ChartOptions = {
  series: ApexAxisChartSeries | ApexNonAxisChartSeries;
  chart: ApexChart;
  xaxis: ApexXAxis;
  title: ApexTitleSubtitle;
  fill: ApexFill;
  yaxis: ApexYAxis;
  dataLabels: ApexDataLabels;
  grid: ApexGrid;
  tooltip: ApexTooltip;
  colors: string[];
  plotOptions: ApexPlotOptions;
  legend: ApexLegend;
  stroke: ApexStroke;
};

@Component({
  selector: 'app-voting-result',
  templateUrl: './voting-result.component.html',
  styleUrls: ['./voting-result.component.css']
})
export class VotingResultComponent implements OnInit {
  public chartOptions: ChartOptions;

  constructor() {
    this.chartOptions = {
      series: [{
        data: [249, 242, 219, 149, 30, 10],
        name: 'Votes',
      }],
      chart: {
        type: 'bar',
        background: 'transparent',
        height: 350,
        toolbar: {
            show: false,
        },
      },
      colors: ['#f1934a', '#a51d1d', '#ffdc52', '#5df8c9', '#fd0169', '#3639df'],
      plotOptions: {
        bar: {
            distributed: true,
            borderRadius: 4,
            horizontal: false,
            columnWidth: '40%',
        },
      },
      dataLabels: {
        enabled: false,
      },
      fill: {
        opacity: 1,
      },
      grid: {
        borderColor: '#55596e',
        yaxis: {
            lines: {
                show: true,
            },
        },
        xaxis: {
            lines: {
                show: true,
            },
        },
      },
      legend: {
        labels: {
            colors: '#f5f7ff',
        },
        show: true,
        position: 'top',
      },
      stroke: {
        colors: ['transparent'],
        show: true,
        width: 2,
      },
      tooltip: {
        shared: true,
        intersect: false,
        theme: 'dark',
      },
      xaxis: {
        categories: ['BJP', 'Congress', 'AAP', 'BSP', 'CPI', 'NPP'],
        title: {
            style: {
                color: '#f5f7ff',
            },
        },
        axisBorder: {
            show: true,
            color: '#55596e',
        },
        axisTicks: {
            show: true,
            color: '#55596e',
        },
        labels: {
            style: {
                colors: '#f5f7ff',
            },
        },
      },
      yaxis: {
        title: {
            text: 'Vote-Count',
            style: {
                color: '#f5f7ff',
            },
        },
        axisBorder: {
            color: '#55596e',
            show: true,
        },
        axisTicks: {
            color: '#55596e',
            show: true,
        },
        labels: {
            style: {
                colors: '#f5f7ff',
            },
        },
      },
      title: {
        text: "Voting Results",
        align: "center",
        style: {
          color: '#f5f7ff',
        }
      },
    };
  }

  ngOnInit(): void {
    this.toggleSidebar();
  }

  toggleSidebar(): void {
    const sidebarToggle = document.getElementById('sidebar-toggle');
    const sidebar = document.getElementById('sidebar');

    if (sidebarToggle && sidebar) {
      sidebarToggle.addEventListener('click', () => {
        sidebar.classList.toggle('collapsed');
      });
    }
  }
}
